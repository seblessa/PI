#include <stdio.h>
#define N 2

void sort_desc(int vec[], int n){
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(vec[i]>vec[j]){
                temp=vec[i];
                vec[i]=vec[j];
                vec[j]=temp;
            }
        }
    }
}

void fill_array(int vec[],int n) {
    for (size_t i = 0; i < n; i++) {
        scanf("%d",&vec[i]);
    }
}

void print_array(int vec[],int n){
    printf("(");
    for (int i = 0; i < n; i++) {
        if (i!=n-1) {
            printf("%d,",vec[i]);
        }else{
            printf("%d",vec[i]);
        }
    }
    printf(")\n");
}

int main(int argc, char const *argv[]) {
    int vec[N];

    fill_array(vec,N);

    print_array(vec,N);

    printf("\n");
    sort_desc(vec,N);

    print_array(vec,N);


    return 0;
}
