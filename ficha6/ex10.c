#include <stdio.h>

int magico(int a[20][20], int n){
  int total=0,temp1=0,temp2=0,temp3=0,temp4=0;
  for(int i=0;i<n;i++){
    total+=a[i][0];
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      temp1+=a[i][j];
      temp2+=a[j][i];
      if(i==j){
        temp3+=a[i][i];
      }
      if (i==n-j-1) {
        temp4+=a[i][i];
      }
    if(total!=temp1){
      return 0;
    }
    if(total!=temp2){
      return 0;
    }
    if(total!=temp3){
      return 0;
    }
    temp1=0,temp2=0,temp3=0,temp4=0;
    }
  }
  return 1;
}

int main(int argc, char const *argv[]) {

  return 0;
}
