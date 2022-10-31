#include <stdio.h>
int main(int argc, char const *argv[]) {
    int n,cont=0;
    float media=0;
    scanf("%d",&n);
    while (n!=0) {
        media+=n;
        cont++;
        scanf("%d",&n);
    }
    media=media/cont;
    printf("%.2f\n",media);
    return 0;
}
