#include <stdio.h>
int main(void) {
  float l, w, h, v; // dimensões e volume
  printf("L=?"); scanf("%f", &l);
  printf("W=?"); scanf("%f", &w);
  printf("H=?"); scanf("%f", &h);
  v = l*w*h; // cálculo do volume
  printf("LxWxH: %.2f*%.2f*%.2f cm\n", l,w,h);
  printf("Volume: %.2f cm^3\n", v);
return 0;
}
