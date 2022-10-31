#include <stdio.h>

void reduzir(int *pnum, int *pdenom){
  int num=*pnum,denom=*pdenom,cima,baixo,r;

  cima=num;
  baixo=denom;

  while (denom!=0) {
    r=num%denom;
    num=denom;
    denom=r;
  }


  *pnum=cima/num;

  *pdenom=baixo/num;
}

int main(int argc, char const *argv[]) {
    int num, denom, *p, *q;
    p=&num;
    q=&denom;
    printf("Num: ");scanf("%d", &num);
    printf("Denom: ");scanf("%d", &denom);
    reduzir(p, q);
    if (denom!=1) {
        printf("Frac: %d/%d\n", num, denom);
    }
    else {
        printf("Frac: %d\n", num);
    }
    return 0;
}
