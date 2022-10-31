#include <stdio.h>

#define PI 3.14

int main(int argc, char const *argv[]) {
    int r,v;
    printf("Escreva o raio: " );
    scanf("%d",&r );
    v=4/3 * PI * r*r*r;
    printf("O volume é: %d.\n",v );



    return 0;
}
