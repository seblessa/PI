#include <stdio.h>
#define N 100

int verification(int vec[],int n, int size){
    for (int i = 0; i < size; i++) {
        if(vec[i]==n){
            return 0;
        }
    }
    return 1;
}

int fill_array(int vec[] ,int size) {
    int n,new_size=0;

    printf("Números:\n");
    scanf("%d",&n);
    while(n!=-1){
        if(verification(vec,n,new_size)){
            vec[new_size]=n;
            new_size++;
        }
        scanf("%d",&n);
    }
    return new_size;
}

int main() {
    int vec[N]={0};

    int size = fill_array(vec,N);

    printf("\n");

    for (int j = 0; j < size; j++) {
        printf("%d\n",vec[j]);
    }
    return 0;
}
