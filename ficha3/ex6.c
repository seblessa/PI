#include <stdio.h>
int main(int argc, char const *argv[]) {
    int cima,baixo,num,denom,r;

    printf("Numerador: ");

    scanf("%d",&num );

    printf("Denominador: ");

    scanf("%d",&denom );


    cima=num;
    baixo=denom;

    while (denom!=0) {
        r=num%denom;
        num=denom;
        denom=r;
    }



    printf("A fração %d/%d é equivalente a %d/%d \n",cima,baixo,cima/num,baixo/num);






    return 0;
}
