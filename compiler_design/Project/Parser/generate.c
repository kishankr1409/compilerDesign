/*This is generate.c File*/


int list_num=1;
int a=1;
char tx[1000]={};
init_output_page()
{
fprintf(fpout, "\n\n\n\n\n");
fflush(fpout);
}

/*this function works for nest blocks,when it counters \end {endvaribales},it will delete the last strings put into beginblock variables*/
void deletsing(single,endv)
char *single;
char *endv;
{
int i;
int slen=strlen(single);
     if (!strcmp(endv,"{itemize}")){    /*when end an begin block, delete its values in the variable*/
            single[slen]=0;
               for (i=1;i<=9;i++){
                   single[slen-i]=0;
                    }
          }
      else if (!strcmp(endv,"{enumerate}")){
              single[slen]=0;
        for (i=1;i<=11;i++){
                   single[slen-i]=0;
                    }
              }
        else if (!strcmp(endv,"{single}")){
                  single[slen]=0;
                  for (i=1;i<=8;i++){
                   single[slen-i]=0;
                    }
             }
       else if (!strcmp(endv,"{center}")){
              single[slen]=0;
                for (i=1;i<=8;i++){
                   single[slen-i]=0;
                    }
              }
     else if (!strcmp(endv,"{verbatim}")){
              single[slen]=0;
              for (i=1;i<=10;i++){
                   single[slen-i]=0;
                    }
           }
}





/*this is tabular columnspec  function*/
void generatetab(tabular,txt,tabcsp)
char *tabcsp;
char *tabular;
char *txt;

{
 int col_num = strlen(tabcsp);
	 if(!strcmp(tabular,"{tabular}")){

		if(strcmp(tx,tabcsp)){
			fprintf(fpout,"\n");
			strcpy(tx,tabcsp);
		}
			if(a==1){    /*for each column,r,l,c means its ouput related location*/
				if(*(tabcsp+a-1)=='r'){
					fprintf(fpout,"%15s  ",txt);
				}
				else if(*(tabcsp+a-1)=='l'){
					fprintf(fpout,"%-15s  ",txt);
				}
				else if(*(tabcsp+a-1)=='c'){
					fprintf(fpout,"%*s  ",OUT_WIDTH/2+strlen(txt) /2,txt);
				}
			}
			if(a==2){
				if(*(tabcsp+a-1)=='r'){
					fprintf(fpout,"%15s  ",txt);
				}
				else if(*(tabcsp+a-1)=='l'){
					fprintf(fpout,"%-15s  ",txt);
				}
				else if(*(tabcsp+a-1)=='c'){
					fprintf(fpout,"%*s  ",OUT_WIDTH/2+strlen(txt) /2,txt);
				}
			}
			if(a==3){
				if(*(tabcsp+a-1)=='r'){
					fprintf(fpout,"%15s  ",txt);
				}
				else if(*(tabcsp+a-1)=='l'){
					fprintf(fpout,"%-15s  ",txt);
				}
				else if(*(tabcsp+a-1)=='c'){
					fprintf(fpout,"%*s   ",OUT_WIDTH/2+strlen(txt) /2,txt);
				}
			}

		if(a++ == col_num){
			fprintf(fpout,"\n");
			a=1;
		}

		fflush(fpout);

	}
}

/*This is center function and center related nest function*/
void generatecent(single,text)

char *text;
char *single;
{
   if (!strcmp(single,"{center}")){
   fprintf (fpout,"\n\n%*s\n", OUT_WIDTH / 2 + strlen(text) / 2,text);
  fflush(fpout);}
    else if (!strcmp(single,"{single}{center}")){
        fprintf (fpout,"\n%*s", OUT_WIDTH / 2 + strlen(text) / 2,text);
   fflush(fpout);}
}





/* itemize and enumerate function and their related combination function*/
void generate_itemize_block(sentences,list_mode)
char *sentences;
char *list_mode;

{

   if(!strcmp(list_mode,"{itemize}"))
            fprintf(fpout, "\n\n\t- %s\n",sentences);
          else if (!strcmp(list_mode,"{enumerate}")){
        fprintf(fpout,"\n\n\t%d. %s\n", list_num,sentences);
         list_num++;
        }
          else if (!strcmp(list_mode,"{enumerate}{enumerate}")){
         fprintf(fpout,"\n\n\t%d. %s", list_num,sentences);
         list_num++;
           }
         else if (!strcmp(list_mode,"{itemize}{itemize}")){
         fprintf(fpout,"\n\n\t- %s\n",sentences);

           }
         else if (!strcmp(list_mode,"{enumerate}{itemize}")){
          fprintf(fpout,"\n\n\t- %s\n",sentences);
           }
          else if (!strcmp(list_mode,"{itemize}{enumerate}")){
          fprintf(fpout,"\n\n\t%d. %s", list_num,sentences);
         list_num++;

           }
           else if (!strcmp(list_mode,"{single}{enumerate}")){
             fprintf(fpout,"\n\t%d. %s", list_num,sentences);
         list_num++;
            }
            else if (!strcmp(list_mode,"{single}{itemize}")){
               fprintf(fpout, "\n\t- %s",sentences);
              }
           else if(!strcmp(list_mode,"{single}{itemize}{enumerate}")){
          fprintf(fpout,"\n\t%d. %s",list_num,sentences);
         list_num++;
             }
   }


/* single and verbatim*/
void generatebgverb(bgverb,bgtx)
char *bgverb;
char *bgtx;
{
char text[1000];
int i,j,k,r;
int llen;
int slen=strlen(bgtx);
      if (!strcmp(bgverb,"{verbatim}"))
        {
              strcpy(text,bgtx);

              fprintf(fpout,"\n%s\n",text);
             fflush(fpout);
          }
           else  if (!strcmp(bgverb,"{single}")){
                  strcpy(text,bgtx);
                    for (i = 0; i <= slen; )
  {
   for (j = 0; ((j < OUT_WIDTH) && (i <= slen)); i++, j++)
       line[j] = text[i];

   if (i <= slen)
     {
       if ((line[j-1] != ' ') && (text[i] !=' '))
         {
           for (k = j-1; line[k] != ' '; k--)
             ;
           i = i - (j - k - 1);
           j = k;
         }
       for ( ;text[i] == ' '; i++)
         ;
     }

   line[j] = '\0';

   llen = strlen(line);

   if (i <= slen)
     {
       fprintf(fpout, "\n%s", line);
       fflush(fpout);
     }
   else
     {
       for(r = 0; r <= llen; r++)
         text[r] = line[r];  /* includes backslash 0 */
     }
  }
                    fprintf(fpout,"\n%s",text);
                  }
             else if (!strcmp(bgverb,"{right}")){
                   strcpy(text,bgtx);
                    fprintf(fpout,"\n%40s\n",text);
                   }
         else if (!strcmp(bgverb,"{center}{single}{verbatim}")){
             strcpy(text,bgtx);
              fprintf(fpout,"\n%*s\n",OUT_WIDTH / 2 + strlen(text) / 2,text);
                }
            else if (!strcmp(bgverb,"{center}{verbatim}")){
               strcpy(text,bgtx);
                 fprintf(fpout,"\n%*s\n",OUT_WIDTH / 2 + strlen(text) / 2,text);}
           }
/*this function change the font to it of the text in the {} */
void generatecurfont(font,s)
char *font;
char *s;
{
int slen=strlen(s);
int i;
char text[1000];

   if (!strcmp(font,"\\it")) {
           strcpy(text,s);
             fprintf(fpout,"\n");
       for (i=0;i<=slen;i++) {
                fprintf(fpout, " %c%c%c", text[i], 8, 95);
                if (text[i]=="\}"){
                  break;
                fprintf(fpout,"whartttttt");
 }
                  }}
    else if (!strcmp(font,"\\rm")){
       strcpy(text,s);
       fprintf(fpout,"\n%s",text);
     }
     fprintf(fpout,"\n");
}

// declarations for use in generate_sec_header function
char convertToRAlph(int i);
char convertToLAlph(int i);
void convertToRoman (unsigned int val, char *res);
void convertToLRoman (unsigned int val, char *res);

void  generate_sec_header(i, s)
int  i;
char *s;
{
char output[10];
switch (get_page_style()) {
        case 306:
                //strcpy(output, (char*)convertToLAlph(i));
                fprintf(fpout, "\n\n%c %s\n", convertToLAlph(i), s);
                fflush(fpout);
                break;
        case 307:
                //strcpy(output, (char*)convertToRAlph(i));
                fprintf(fpout, "\n\n%c %s\n", convertToRAlph(i), s);
                fflush(fpout);
                break;
        case 305:
                convertToRoman(i, output);
                fprintf(fpout, "\n\n%s %s\n", output, s);
                fflush(fpout);
                break;
        case 304:
                convertToLRoman(i, output);
                fprintf(fpout, "\n\n%s %s\n", output, s);
                fflush(fpout);
                break;
        case 303:
                //strcpy(output, (char*)i);
                fprintf(fpout, "\n\n%d %s\n", i, s);
                fflush(fpout);
                break;
        default:;
}
if (get_gen_toc() == TOC_ON)
   //fprintf(fptoc, "\n%d %s ---------- PAGE %d\n", i, s, get_page_no());
   switch (get_page_style()) {
        case 306:
                fprintf(fptoc, "\n%c %s ---------- PAGE %d\n", convertToLAlph(i), s, get_page_no());
                //fflush(fpout);
                break;
        case 307:
                fprintf(fptoc, "\n%c %s ---------- PAGE %d\n", convertToRAlph(i), s, get_page_no());
                //fflush(fpout);
                break;
        case 305:
                convertToRoman(i, output);
                fprintf(fptoc, "\n%s %s ---------- PAGE %d\n", output, s, get_page_no());
                //fflush(fpout);
                break;
        case 304:
                convertToLRoman(i, output);
                fprintf(fptoc, "\n%s %s ---------- PAGE %d\n", output, s, get_page_no());
                //fflush(fpout);
                break;
        case 303:
                fprintf(fptoc, "\n%d %s ---------- PAGE %d\n", i, s, get_page_no());
                break;
        default:;
   }
}

/* Source: StackOverFlow */
void convertToRoman (unsigned int val, char *res) {
    char *hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char *tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char *ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    int   size[] = { 0,   1,    2,     3,    2,   1,    2,     3,      4,    2};
    //  Add 'M' until we drop below 1000.
    while (val >= 1000) {
        *res++ = 'M';
        val -= 1000;
    }
    // Add each of the correct elements, adjusting as we go.
    strcpy (res, hundreds[val/100]); res += size[val/100]; val = val % 100;
    strcpy (res, tens[val/10]);  res += size[val/10];  val = val % 10;
    strcpy (res, ones[val]);     res += size[val];
    *res = '\0';
  }

  /* Source: StackOverFlow */
  void convertToLRoman (unsigned int val, char *res) {
      char *hundreds[] = {"", "c", "cc", "ccc", "cd", "d", "dc", "dcc", "dccc", "cm"};
      char *tens[] = {"", "x", "xx", "xxx", "xl", "l", "lx", "lxx", "lxxx", "xc"};
      char *ones[] = {"", "i", "ii", "iii", "iv", "v", "vi", "vii", "viii", "ix"};
      int   size[] = { 0,   1,    2,     3,    2,   1,    2,     3,      4,    2};
      //  Add 'M' until we drop below 1000.
      while (val >= 1000) {
          *res++ = 'm';
          val -= 1000;
      }
      // Add each of the correct elements, adjusting as we go.
      strcpy (res, hundreds[val/100]); res += size[val/100]; val = val % 100;
      strcpy (res, tens[val/10]);  res += size[val/10];  val = val % 10;
      strcpy (res, ones[val]);     res += size[val];
      *res = '\0';
  }

  /* Brute-force Comparison */
  char convertToRAlph(i)
  int i;
  {
  switch(i){
          case 1:
                  return 'A';
          case 2:
                  return 'B';
          case 3:
                  return 'C';
          case 4:
                  return 'D';
          case 5:
                  return 'E';
          case 6:
                  return 'F';
          case 7:
                  return 'G';
          case 8:
                  return 'H';
          case 9:
                  return 'I';
          case 10:
                  return 'J';
          case 11:
                return 'K';
          case 12:
                return 'L';
          case 13:
                return 'M';
          case 14:
                return 'N';
          case 15:
                return 'O';
          case 16:
                return 'P';
          case 17:
                return 'Q';
          case 18:
                return 'R';
          case 19:
                return 'S';
          case 20:
                return 'T';
          case 21:
                return 'U';
          case 22:
                return 'V';
          case 23:
                return 'W';
          case 24:
                return 'X';
          case 25:
                return 'Y';
          case 26:
                return 'Z';
          default:;}
}
/* Brute force way of comparing */
char convertToLAlph(i)
int i;
{
        //if(i>=1 && i<=26)
        //      return "abcdefghigklmnopqrstuvwxyz"[i-1];
        switch(i){
        case 1:
                return 'a';
        case 2:
                return 'b';
        case 3:
                return 'c';
        case 4:
                return 'd';
        case 5:
                return 'e';
        case 6:
                return 'f';
        case 7:
                return 'g';
        case 8:
                return 'h';
        case 9:
                return 'i';
        case 10:
                return 'j';
        case 11:
                return 'k';
        case 12:
                return 'l';
        case 13:
                return 'm';
        case 14:
                return 'n';
        case 15:
                return 'o';
        case 16:
                return 'p';
        case 17:
                return 'q';
        case 18:
                return 'r';
        case 19:
                return 's';
        case 20:
                return 't';
        case 21:
                return 'u';
        case 22:
                return 'v';
        case 23:
                return 'w';
        case 24:
                return 'x';
        case 25:
                return 'y';
        case 26:
                return 'z';
        default:
                ;
        }
}

void  generate_subsec_header(i, j, s)
int  i,j;
char *s;
{
//fprintf(fpout, "\n\n%d.%d %s\n", (i-1), j, s);
//fflush(fpout);
char output[10];
char output_j[10];
switch (get_page_style()) {
        case 306:
                //strcpy(output, (char*)convertToLAlph(i));
                fprintf(fpout, "\n\n%c.%c %s\n", convertToLAlph(i-1), convertToLAlph(j), s);
                fflush(fpout);
                break;
        case 307:
                //strcpy(output, (char*)convertToRAlph(i));
                fprintf(fpout, "\n\n%c.%c %s\n", convertToRAlph(i-1), convertToRAlph(j), s);
                fflush(fpout);
                break;
        case 305:
                convertToRoman(i-1, output);
                convertToRoman(j, output_j);
                fprintf(fpout, "\n\n%s.%s %s\n", output, output_j, s);
                fflush(fpout);
                break;
                case 304:
                              convertToLRoman(i-1, output);
                              convertToLRoman(j, output_j);
                              fprintf(fpout, "\n\n%s.%s %s\n", output, output_j, s);
                              fflush(fpout);
                              break;
                      case 303:
                              //strcpy(output, (char*)i);
                              fprintf(fpout, "\n\n%d.%d %s\n", i-1, j, s);
                              fflush(fpout);
                              break;
                      default:;
              }
              /*
              if (get_gen_toc() == TOC_ON)
                 fprintf(fptoc, "\n%d.%d %s ---------- PAGE %d\n",
                                          (i-1), j, s, get_page_no());*/
              if (get_gen_toc() == TOC_ON)
                 switch (get_page_style()) {
                      case 306:
                              fprintf(fptoc, "\n%c.%c %s ---------- PAGE %d\n", convertToLAlph(i-1), j, s, get_page_no());
                              //fflush(fpout);
                              break;
                      case 307:
                              fprintf(fptoc, "\n%c.%c %s ---------- PAGE %d\n", convertToRAlph(i-1), j, s, get_page_no());
                              //fflush(fpout);
                              break;
                      case 305:
                              convertToRoman(i-1, output);
                              convertToRoman(j, output_j);
                              fprintf(fptoc, "\n%s.%s %s ---------- PAGE %d\n", output, output_j, s, get_page_no());
                              //fflush(fpout);
                              break;
                      case 304:
                              convertToLRoman(i-1, output);
                              convertToLRoman(j, output_j);
                              fprintf(fptoc, "\n%s.%s %s ---------- PAGE %d\n", output, output_j, s, get_page_no());
                              //fflush(fpout);
                              break;
                      case 303:
                              fprintf(fptoc, "\n%d.%d %s ---------- PAGE %d\n", i-1, j, s, get_page_no());
                              break;
                      default:;
                 }
              }
              //for vertical / hori space
              void generate_space(space, num_space)
              char *space;
              char *num_space;
              {
                      // create a for loop with vs as number of times it loops to create a newline
                      int i;
                      int nums = atoi(num_space); // number of space

                      if(!strcmp(space, "\\vspace")) {
                              for(i=0; i<nums; i++)
                              {
                                      fprintf(fpout, "\n");
                                      //fflush(fpout);
                              }
                      } else if(!strcmp(space, "\\hspace")) {
                              for(i=0; i<nums; i++)
                              {
                                      fprintf(fpout, " ");
                                      //fflush(fpout);
                              }
                      }
              }
              /*
              int bg_single = 0;
              void set_single()
              {
                      bg_single = 1;
              }

              void undo_single()
              {
                      bg_single = 0;
              }
              */
              // added a linespacing arg
              void  generate_formatted_text(s, linespace)
              char *s;
              char *linespace; // lingspacing: 1/2/3
              {
              int slen = strlen(s);
              int i, j, k, r;
              int llen;
              /* declare the structure first and then compare */
              //struct doc_symtab DST;

              /* newly defined varialbes */
              char result[10];

              for (i = 0; i <= slen; )
                {
                 for (j = 0; ((j < OUT_WIDTH) && (i <= slen)); i++, j++)
                      line[j] = s[i];

                 if (i <= slen)
              {
                     if ((line[j-1] != ' ') && (s[i] !=' '))
                       {
                         for (k = j-1; line[k] != ' '; k--)
                           ;
                         i = i - (j - k - 1);
                         j = k;
                       }
                     for ( ; s[i] == ' '; i++)
                       ;
                   }

                 line[j] = '\0';

                 llen = strlen(line);


                 if (i <= slen)
                   {
                      /*if(bg_single == 1)
                      {
                              fprintf(fpout, "single\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n%s", line);
                              fflush(fpout);
                      }
                      else {*/
                      //fprintf(fpout, "line spacing: %s", linespace);
                      if(!strcmp(linespace, "1")) {
                       fprintf(fpout, "\n%40s", line);
                       fflush(fpout);
                       if(check_done_page())
                       {
                              incr_lines_so_far();
                       }else{
                         init_lines_so_far();
                                         if(get_page_style() == 306)
                                         {
                                                 fprintf(fpout, "\n\n\n\n\n\t -- Page %c --\n\n\n", convertToLAlph(get_page_no()));
                                         }
                                           else if (get_page_style()==307){
                                                   fprintf(fpout,"\n\n\n\n\n\t -- Page %c --\n\n\n", convertToRAlph(get_page_no()));}
                                             else if(get_page_style() == 305) //upper case roman numeral
                                         {
                                                 //fprintf(fpout,"AAAAAAAAAAAAAAis : %d\n", DST.page_style);
                                                 convertToRoman(get_page_no(), result);
                                          fprintf(fpout, "\n\n\n\n\n\t -- Page %s --\n\n\n", result);
                                         } else if(get_page_style() == 304) //lower case roman numeral
                                         {
                                                 convertToLRoman(get_page_no(), result);
                                                 fprintf(fpout, "\n\n\n\n\n\t -- Page %s --\n\n\n", result);
                                         } else if(get_page_style() == 303) //arabic numeral
                                         {
                                                 //result[0] = get_page_no();
                                                 //strcpy(result, get_page_no());
                                                 fprintf(fpout, "\n\n\n\n\n\t -- Page %d --\n\n\n", get_page_no());
                                         }
                                         //fprintf(fpout, "\n\n\n\n\n ------ Page %s ------\n\n\n", result);
                                         inc_page_no();
                                 }
                                 } else if(!strcmp(linespace, "2")) {
                                         fprintf(fpout, "\n\n%40s", line);
                                         fflush(fpout);
                                         if(check_done_page())
                                         {
                                                 incr_lines_so_far();
                                         }/*else{
                                                 init_lines_so_far();
                                                 if(get_page_style() == 304)
                                                 {
                                                         //fprintf(fpout,"AAAAAAAAAAAAAAis : %d\n", DST.page_style);
                                                         convertToRoman(get_page_no(), result);
                                                 }
                                                 fprintf(fpout, "\n\n\n\n\n ------ Page %d ------\n\n\n", get_page_no());
                                                 inc_page_no();
                                         }*/
                                         else{
                                         init_lines_so_far();
                                         if(get_page_style() == 306) //
                                         {
                                           fprintf(fpout, "\n\n\n\n\n\t -- Page %c --\n\n\n", convertToLAlph(get_page_no()));
                                                          }
                                                            else if (get_page_style()==307){
                                                                    fprintf(fpout,"\n\n\n\n\n\t -- Page %c --\n\n\n", convertToRAlph(get_page_no()));}
                                                              else if(get_page_style() == 305) //upper case roman numeral
                                                          {
                                                                  //fprintf(fpout,"AAAAAAAAAAAAAAis : %d\n", DST.page_style);
                                                                  convertToRoman(get_page_no(), result);
                                                           fprintf(fpout, "\n\n\n\n\n\t -- Page %s --\n\n\n", result);
                                                          } else if(get_page_style() == 304) //lower case roman numeral
                                                          {
                                                                  convertToLRoman(get_page_no(), result);
                                                                  fprintf(fpout, "\n\n\n\n\n\t -- Page %s --\n\n\n", result);
                                                          } else if(get_page_style() == 303) //arabic numeral
                                                          {
                                                                  //result[0] = get_page_no();
                                                                  //strcpy(result, get_page_no());
                                                                  fprintf(fpout, "\n\n\n\n\n\t -- Page %d --\n\n\n", get_page_no());
                                                          }
                                                          //fprintf(fpout, "\n\n\n\n\n ------ Page %s ------\n\n\n", result);
                                                          inc_page_no();
                                                          }
                                                  } else if(!strcmp(linespace, "3")) {
                                                          fprintf(fpout, "\n\n\n%40s", line);
                                                          fflush(fpout);
                                                          if(check_done_page())
                                                          {
                                                                  incr_lines_so_far();
                                                          }/*else{
                                                                  init_lines_so_far();
                                                                  if(get_page_style() == 304)
                                                                  {
                                                                    //fprintf(fpout,"AAAAAAAAAAAAAAis : %d\n", DST.page_style);
                                                                          convertToRoman(get_page_no(), result);
                                                                  }
                                                                  fprintf(fpout, "\n\n\n\n\n ------ Page %d ------\n\n\n", get_page_no());
                                                                  inc_page_no();
                                                          }*/
                                                          else{
                                                          init_lines_so_far();
                                                          if(get_page_style() == 306) //style = 1
                                                          {
                                                                  //fnstyle = 1;
                                                                  fprintf(fpout, "\n\n\n\n\n\t -- Page %c --\n\n\n", convertToLAlph(get_page_no()));
                                                                }
               else if (get_page_style()==307){ //style = 2
                       //fnstyle = 2;
                       fprintf(fpout,"\n\n\n\n\n\t -- Page %c --\n\n\n", convertToRAlph(get_page_no()));}
                 else if(get_page_style() == 305) //upper case roman numeral, style = 3
             {
                     //fprintf(fpout,"AAAAAAAAAAAAAAis : %d\n", DST.page_style);
                     //fnstyle = 3;
                     convertToRoman(get_page_no(), result);
              fprintf(fpout, "\n\n\n\n\n\t -- Page %s --\n\n\n", result);
             } else if(get_page_style() == 304) //lower case roman numeral, style = 4
             {
                     //fnstyle = 4;
                     convertToLRoman(get_page_no(), result);
                     fprintf(fpout, "\n\n\n\n\n\t -- Page %s --\n\n\n", result);
             } else if(get_page_style() == 303) //arabic numeral, style = 5
             {
                     //result[0] = get_page_no();
                     //strcpy(result, get_page_no());
                     //fnstyle = 5;
                     fprintf(fpout, "\n\n\n\n\n\t -- Page %d --\n\n\n", get_page_no());
             }
             //fprintf(fpout, "\n\n\n\n\n ------ Page %s ------\n\n\n", result);
             inc_page_no();
             }
     }
  }//}
else
  {
    for(r = 0; r <= llen; r++)
      s[r] = line[r];  /* includes backslash 0 */
  }
}
}