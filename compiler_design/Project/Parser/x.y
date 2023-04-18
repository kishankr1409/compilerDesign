/*This is latexp3c.y file*/

%{
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define  BUF_SIZE       512

int ws_flag = 0;

char ls_value[10];
char hornum[50];
char style[10];
char fontst[10];
char fonttx[50];

char tab[10];/* {table}*/
char tabu[10];/*{table}*/
char bgtx[1000]; /* verbatim and single text*/
char itemtx[1000];/* enumberate or itemize text content*/
char single[20]; /* begin block variables*/ 

char tabcsp[30]; /* tabular column*/

char tablo[10]; /*table location*/
char tabtx[1000]; /*table text*/
char endv[10];
char cap[10]; /*caption v*/
char captx[1000];
#include "lex.yy.c"
#include "util.c"
#include "generate.c"

%}


%union 
   {
      char   trans[BUF_SIZE+1];
      int    val;
   }

%start latexstatement

%token  BACKSL    LBEGIN    LCURLYB    DOCUMENT    RCURLYB    END
%token  WORD      WS        SPECCHAR   CENTER      VERBATIM   SINGLE  
%token  ITEMIZE   ENUMERATE TABULAR    TABLE       LSQRB      RSQRB
%token  H         T         B          COLS        RIGHT
%token  CAPTION   LABEL     DBLBS      ITEM        SECTION    SUBSEC  
%token  TABOCON   RENEW     BASELINES  PAGENUM     INTEGER    ARABIC1 
%token  LROMAN1   CROMAN1   LALPH1     CALPH1      VSPACE     HSPACE
%token  RM        IT        NOINDENT   REF 
%token  ARABIC2   LROMAN2   CROMAN2    LALPH2      CALPH2

%type <trans> textoption  wsorword WS WORD horvert linespacing spacing VSPACE HSPACE RM IT fonts VERBATIM begcmds CENTER SINGLE ITEMIZE ENUMERATE TABLE TABULAR beginblock  beginendopts ITEM anitem entry SPECCHAR anentry entrylist begtableopts position H T B RIGHT endcmds endbegin  
%type <val> style2 ARABIC2 LROMAN2 CROMAN2 LALPH2 CALPH2

%%
latexstatement   :  startdoc  mainbody  enddoc
                 ;

startdoc         :  LBEGIN  DOCUMENT  
                 ;

enddoc           :  END  DOCUMENT  
                 ;

mainbody         :  mainbody  mainoption
                 |  mainoption
                 ;

mainoption       :  textoption
                    {
                      generate_formatted_text($1,ls_value);
                    }
                 |  commentoption
                 |  latexoptions
                 ;

textoption       :  textoption  wsorword
                    {
                      strcat($$, " ");
                      strcat($$, $2);
                    }
                 |  wsorword
                    {
                      strcpy($$, $1);
                    }
                 ;

wsorword         :  WS 
                    {
                      strcpy($$, yytext);
                    }
                 |  WORD
                    {
                      strcpy($$, yytext);
                    }
                 ;

commentoption    :  SPECCHAR  textoption
                 ;

latexoptions     :  backsoptions
                 |  LCURLYB  curlyboptions  RCURLYB
                 ;

curlyboptions    :  fonts  textoption{
                   strcpy(fonttx,$2);
             
                   generatecurfont($1,$2);}
		    
                   ;

backsoptions     :  beginendopts
                 |  sectionoptions
                 |  tableofcont
                 |  linespacing
                 |  pagenumbers
                 |  pagenuminit
                 |  spacing
                 |  fonts
                 |  specialchar
                 |  nonewpara
                 |  reference
                 ;
     
beginendopts     :  LBEGIN  begcmds {
                    fprintf(fpout,"\n");              
                    strcat(single,$2);
                    }
                   beginblock
                   endbegin{
                          fprintf(fpout,"\n\n");
                          deletsing(single,endv);
                          list_num=1;  
                 }  
        	 ;

begcmds          :  CENTER {
                               
                               strcpy($$,yytext);} 
                 |  VERBATIM  {ws_flag=1;
                               strcpy($$,yytext);}
                 |  SINGLE  {strcpy($$,yytext);
                               }
                 |  ITEMIZE  {strcpy($$,yytext);}
                 |  ENUMERATE {strcpy($$,yytext);}
                 |  TABLE {strcpy(tab,yytext);} begtableopts
                 |  TABULAR {strcpy(tabu,yytext);} begtabularopts 
                 |  RIGHT {
                         strcpy($$,yytext);}
                 ;

endbegin         :  END  endcmds {strcpy(endv,$2);}
                 |  endtableopts  TABLE {strcpy($$,yytext);}
                 
                 ;

endcmds          :  CENTER {strcpy($$,yytext);} 
                 |  VERBATIM  {ws_flag=0;strcpy($$,yytext);}
                 |  SINGLE  {strcpy($$,yytext);}
                 |  ITEMIZE{strcpy($$,yytext);}  
                 |  ENUMERATE {strcpy($$,yytext);}
                 |  TABULAR
                 | RIGHT
                 ;

beginblock       :  beginendopts{}
                 |  textoption /* FOR single or verbatim */ {
		 	printf("single or verb or right\n");
                        generatebgverb(single,$1);
                    }
                 |  entrylist  /* FOR center and tabular */ {
		 	printf("center or tabular\n");
                    }
                 |  listblock  /* FOR item and enumerate */
                    {
		    	printf("item or enumerate\n");
                        strcpy($$,yytext);
		    }
                 ;
listblock        :  listblock  anitem {
			printf("listblockA\n");          
                    }
                 |  anitem {
		 	printf("listblockB\n");
		    }
                 ;

anitem           :  ITEM  textoption {
                      	strcpy(itemtx,$2);
                      	generate_itemize_block(itemtx,single);
                    }
                 |  beginendopts {strcpy($$,yytext);}
                 ;

entrylist        :  entrylist  anentry {
			printf("entrylistA\n");       
                    }
                 |  anentry {
		 	printf("entrylistB\n");
                    }
                 ;

anentry          :  entry  DBLBS {
			printf("anentryA\n");
                        strcpy(itemtx,$1);
                        generatecent(single,itemtx);
                    }
                 |  beginendopts {
		 	printf("anentryB\n");
                    }
                 ;

entry            :  entry  SPECCHAR  textoption {
			printf("entryA\n");
                   	generatetab(tabu,$3,tabcsp);
               	    }               
                 |  textoption {
		    	printf("entryB\n");
                    	generatetab(tabu,$1,tabcsp);     
		    }
                 ;

begtableopts     :  LSQRB  position  RSQRB{strcpy(tablo,$2);}
                 ;
                 
begtabularopts   :  LCURLYB  COLS {strcpy(tabcsp,yytext);} RCURLYB
                 ;

position         :  H  {strcpy($$,yytext);}
                 |  T  {strcpy($$,yytext);}
                 |  B {strcpy($$,yytext);}
                 ;

endtableopts     :  END
                 |  CAPTION  LCURLYB   textoption
                    RCURLYB  captionrest 
                 |  labelrest 
                 ;

captionrest      :  END
                 |  labelrest
                 ;

labelrest        :  LABEL  LCURLYB  WORD  RCURLYB  END
                 ;

sectionoptions   :  SECTION  LCURLYB  textoption  RCURLYB
                    {
                      generate_sec_header(get_sec_ctr(), $3);
                      incr_sec_ctr();
                    }
                 |  SUBSEC  LCURLYB  textoption  RCURLYB
                    {
                      generate_subsec_header(get_sec_ctr(), get_subsec_ctr(), $3);
                      incr_subsec_ctr();
                    }
                 ;

tableofcont      :  TABOCON
                    {
                      set_gen_toc();
                    }
                 ;

linespacing      :  RENEW  LCURLYB  BASELINES  RCURLYB
                            LCURLYB  WORD  
                    {
                      strcpy(ls_value, yytext);
                      
                  //    printf("WORD IS: %s\n",ls_value);
                    }
		    RCURLYB
                    {
                      strcpy($$, ls_value);
                    }
                 ;

pagenumbers      :  PAGENUM  style2
                    {
                       
                      set_page_style($2);
                  printf("STYLE ISSSSSSSSSSSSSSSSSSS: %d\n",$2);
                                         
 }
                 ;

style2           :  ARABIC2{$$=ARABIC2;}
                 |  LROMAN2 {$$=LROMAN2;}
                 |  CROMAN2 {$$=CROMAN2;}
                 |  LALPH2{$$=LALPH2;}
                 |  CALPH2{$$=CALPH2;}
                 ;

pagenuminit      :  style1  LCURLYB  WORD  
                    {
                      set_page_no(yytext[0]);
                    }
                    RCURLYB
                 ;

style1           :  ARABIC1
                 |  LROMAN1 
                 |  CROMAN1 
                 |  LALPH1 
                 |  CALPH1
                 ;

spacing          :  horvert  LCURLYB  WORD 
                  {
                  strcpy(hornum,yytext);
                 
                   generate_space($1,&hornum);                       
}
                   RCURLYB{
                  strcpy($$,hornum);
                  }
                   
                 ;

horvert          :  VSPACE{strcpy($$,yytext); 
        
}  
                 |  HSPACE{strcpy($$,yytext);}
                 ;

fonts            :  RM {strcpy($$,yytext);} 
                 |  IT{strcpy($$,yytext);}
                 ;

specialchar      :  SPECCHAR  
                 |  LCURLYB  
                 |  RCURLYB
                 ;

nonewpara        :  NOINDENT
                 ;

reference        :  REF  LCURLYB  WORD  RCURLYB
                 ;
%%

yyerror(){}

main()
{
fpout = fopen("latexout","w");
fptoc = fopen("latextoc","w");
init_lines_so_far();
init_sec_ctr();
init_output_page();

yyparse();
}