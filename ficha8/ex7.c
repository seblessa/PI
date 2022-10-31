#include <stdio.h>
int contar_espacos(char str[]){
  int espacos = 0;
  for(char *k=str; *k!='\0';k++ ){
  if(*k == ' ')
  espacos ++;
  }
  return espacos;
}
int main(int argc, char const *argv[]) {

  char str[]={"Olá mundo ! ! !"};

  puts(str);

  int n = contar_espacos(str);

  printf("%d\n",n);

  return 0;
}
