#include <stdio.h>
#include <string.h>


void bubblesort(int vec[], int n){
    int temp;
    for (int i = 1; i < n; i++) {
        if(vec[i-1]>vec[i]){
            temp=vec[i-1];
            vec[i-1]=vec[i];
            vec[i]=temp;
            i=0;
        }
    }
}

void print_vec(int vec[],int n){
    for (int i = 0; i < n; i++) {
        printf("%d\n",vec[i]);
    }
}


int main(int argc, char const *argv[]) {
    int n;
    printf("Tamanho do vetor:\n");
    scanf("%d",&n);

    int vec[n];

    printf("\n");
    printf("Números para adiconar:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d",&vec[i]);
    }

    printf("\n");


    printf("\n");
    print_vec(vec,n);
    printf("\n");

    printf("\n");
    bubblesort(vec,n);
    printf("\n");

    print_vec(vec,n);

    return 0;
}
