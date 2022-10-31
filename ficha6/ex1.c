#include <stdio.h>

int ordenada(int vec[], int size){
    for(int i=0;i<size-1;i++){
        if(vec[i]>vec[i+1]){
            return 0;
        }
    }
    return 1;

}


int main(int argc, char const *argv[]) {
  const int size=100;
  int vec[size]={1,2,3,4,5,6,7,8,9};
  int a=ordenada(vec,size);
  printf("%d\n",a);

  return 0;
}

i
