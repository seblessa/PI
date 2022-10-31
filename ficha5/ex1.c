#include <stdio.h>
void range(int vec[], unsigned size, int inicio, int incr){
    for(int i=0;i<size;i++){
        vec[i]=inicio+(i*incr);
        printf("%d\n",vec[i]);
    }
}
