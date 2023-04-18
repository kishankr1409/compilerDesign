#include<bits/stdc++.h>
using namespace std;

vector<string> keyWords={"auto","break","case","char","continue","do","default","const",
"double","else","enum","extern","for","if","goto",
"float","int","long","register","return","signed","static","sizeof",
"short","struct","switch","typedef","union","void","while","volatile","unsigned"};

vector<string> operators={
    "+","-","*","/","%",             //Arithmatic operator
    "++","--",                      //Increament/Decrement operator
    "=","+=","-=","*=","/=","%=",  //Assignment operators
    "==",">","<","!=",">=","<=",  //Relational operators
    "&&","||","!",               //Logical operator
    "&","|","^","~","<<",">>"   //Bitwise operator
    
};
bool isKeyword(string word){
    for(int i=0;i<keyWords.size();i++){
       if(word==keyWords[i]){
        return true;
       }
    }
    return false;
}

bool isOperator(string word){
    for(int i=0;i<operators.size();i++){
       if(word==operators[i]){
        return true;
       }
    }
    return false;
}

bool isSeparator(string word){
    if(word==";"||word==","){
        return true;
    }
    return false;
}

set<string> myIdentifers;
bool isIdentifier(string word){
    if(myIdentifers.find(word)!=myIdentifers.end()){
        cout<<word<<" is already declared."<<endl;
        return false;
    }
    if(isKeyword(word)){
        cout<<word<<" is an identifier word."<<endl;
        return false;
    }
    for(int i=0;i<word.length();i++){
        if(word[i]==' '||((word[i]<97 || word[i]>122) and word[i]!='_')){
            cout<<"Whitespace and Special symbol are not allowed."<<endl;
            return false;
        }
    }
    myIdentifers.insert(word);
    return true;
}
int main(){
   string test;
   cin>>test;

   if(isOperator(test)){
    cout<<test<<" is an Operator"<<endl;
   }else{
    cout<<test<<" is not an operator"<<endl;
   }
}