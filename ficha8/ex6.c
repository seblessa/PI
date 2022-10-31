#include <stdio.h>
void store_zeros(int vec[], int n){
  int *p;
  for(p=vec; n>0; n--){
    *p=0;
    p++;
  }
}
int main(int argc, char const *argv[]) {
  printf("Size:\n");
  int n,m;
  scanf("%d",&n );
  m=n;
  printf("\n");
  int vec[n];
  for(int *k=vec;n>0;n--){
    scanf("%d",&*k);
    k++;
  }
  printf("\n");
  store_zeros(vec,5);

  for(int *k=vec;m>0;m--){
    printf("%d\n",*k);
    k++;
  }
  printf("\n");
  return 0;
}
