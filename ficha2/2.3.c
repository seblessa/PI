#include <stdio.h>
int mediana(int a,int b,int c){
    if (a==b) {
        return a;
    }
    if (b==c) {
        return b;
    }
    if (c==a) {
        return c;
    }
    if (a<b) {
        if (b<c) {
            return b;
        }else if(a<c){
            return c;
        }else return a;
    }else if(a<c){
            return a;
        }else if(b<c){
        return c;
    } else return b;
}
int main(int argc, char const *argv[]) {
    int a,b,c,med;
    printf("Primeiro valor: ");
    scanf("%d",&a);
    printf("Segundo valor: ");
    scanf("%d",&b);
    printf("Terceiro valor: ");
    scanf("%d",&c);
    med=mediana(a,b,c);
    printf("Mediana: %d\n",med );
    return 0;
}
