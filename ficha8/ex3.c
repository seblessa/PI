#include <stdio.h>
void decompor(int total_seg, int *horas, int *mins, int *segs){
  int hora,min,segundos;

  min=total_seg/60;
  segundos=total_seg%60;
  hora = min/60;
  min = min%60;

  *horas=hora;
  *mins=min;
  *segs=segundos;
}

int main(int argc, char const *argv[]) {
  int total,a,b,c,*pa=&a,*pb=&b,*pc=&c;

  printf("Número de segundos: ");
  scanf("%d",&total);

  decompor(total,pa,pb,pc);

  printf("%d\n",a );
  printf("%d\n",b );
  printf("%d\n",c );




  return 0;
}
