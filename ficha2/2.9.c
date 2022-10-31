#include <stdio.h>
int prox_bissexto(int n)
{
  while(n%4!=0){
      n++;
  }
  return n;
}
int main(int argc, char const *argv[]) {
    int n= 2014;
    printf("%d\n",prox_bissexto(n) );
    return 0;
}
