#include <stdio.h>
#include <stdlib.h>

#define N 10

int verificar(int n1,int n2,int r) {
    int b;
    if (n1*n2==r){
        printf("Certo!\n");
        b = 1;
    } else
        printf("Errado! O resultado é %d.\n",n1*n2);
        b = 0;

    return b;
}

int main(int argc, char const *argv[]) {
    int n1,n2,r,j=0;
    n1=rand()%9+1;
    n2=rand()%9+1;

    for(int i=0;i<N;i++){
    printf("Quanto é %d * %d?\n",n1,n2 );
    scanf("%d",&r );
    if (verificar(n1,n2,r)==1){
        j++;
    }

    n1=rand()%9+1;
    n2=rand()%9+1;
    }

    printf("Acertou %d perguntas e errou %d.\n",j,10-j );
    return 0;
}
