#include <stdio.h>
int main(int argc, char const *argv[]) {
    int n,div=2;
    printf("Número inteiro: ");
    scanf("%d",&n);
    printf("%d: ",n);
    while (n!=1) {
        if (n%div==0){
            printf("%d ",div );
            n=n/div;
        }else
            div++;
    }
    printf("\n");
    return 0;
}
