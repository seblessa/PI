#include <stdio.h>

void max_min(int vec[], int size, int *pmax, int *pmin){
  int maior=vec[0],menor=vec[0];
  for(int i=0;i<size;i++){
    if (vec[i]>maior) {
      maior=vec[i];
    }
    if (vec[i]<menor) {
      menor=vec[i];
    }
  }
  *pmax=maior;
  *pmin=menor;
}

int main(int argc, char const *argv[]) {
    int max, min, size, *pmax, *pmin;
    pmax = &max;
    pmin = &min;
    printf("Vec size: "); scanf("%d", &size);
    int vec[size];
    for (int i=0; i<size; i++){
        scanf("%d", &vec[i]);
    }
    max_min(vec, size, pmax, pmin);
    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}
