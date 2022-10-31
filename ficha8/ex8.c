#include <stdio.h>
#include <string.h>
void inverter(char str[]){
  char *k=str,a;
  int n=strlen(str),m=n/2,i=0;

  for(;m>0;m--){
    a=*k;
    str[i]=str[n-1];
    str[n-1]=a;
    n--;
    k++;
    i++;
  }
  printf("\n");
}

int main(int argc, char const *argv[]) {
  char str[]="Hello World!!!";

  //scanf("%s",str );

  //printf("\n");

  inverter(str);

  puts(str);

  return 0;
}
