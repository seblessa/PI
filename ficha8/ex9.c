#include <stdio.h>

char procurar(char *str, char ch){
  while(*str!='\0'){
            if (*str==ch){
           return *str;
       }else{
           return "";
       }
       str++;
    }
}


int main(int argc, char const *argv[]) {
  char str[]="aab",*k=str,ch="b";

  printf("%c\n",procurar(*k,ch) );

  return 0;
}
