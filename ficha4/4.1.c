#include <stdio.h>

int main(int argc, char const *argv[]) {
    int s,i=1;
    double E = 0.01,a,b,n;
    printf("Número: ");
    scanf("%lf",&n);
    printf("\n");
    while (n<=0) {
        printf("Número ínvalido.\n\n");
        printf("Número: ");
        scanf("%lf",&n);
        printf("\n");
    }

    a=n/2;
    b=(1.0/2)*(a+(n/a));

    s=b-a;

    if (s<0) {
        s=s*(-1);
    }

    while (s>=E) {
        a=(1.0/2)*(b+(n/b));
        s=a-b;
        if (s<0) {
            s=s*(-1);
        }
        b=a;
        i++;
    }

    printf("%f\n",b);


    return 0;
}
