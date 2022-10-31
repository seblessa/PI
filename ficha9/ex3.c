#include <stdio.h>
#include <math.h>


typedef struct {
  double x, y;
} ponto;


//Representa a distância euclidiana entre o ponto a e o ponto b
double distancia(ponto a, ponto b){
  return sqrt(((a.x-b.x)*(a.x-b.x))+((a.y-b.y)*(a.y-b.y)));
}


//verifica se o ponto a é igual ao ponto b com erro de 0.000001
int mesmo_ponto(ponto a, ponto b){
  int dist=distancia(a,b);
  printf("%d\n",dist);
  if(dist<0.000001){
    return 1;
  }
  return 0;
}

//cria um ponto por input
//'i' representa o numero de pontos criados
int i=1;
ponto read(){
    double x,y;

    printf("%dº ponto:\n",i);

    printf("x:");
    scanf("%lf",&x);

    printf("y:");
    scanf("%lf",&y);

    printf("\n");

    ponto a={x,y};
    i++;
    return a;
}


//cria um ponto com dois valores
ponto set_ponto(double x,double y){
  ponto a={x,y};
  return a;
}

//dá print ao ponto a
void ponto_print(ponto a){
  printf("(%f,%f)\n",a.x,a.y);
}

typedef struct{
    ponto a,b,c,d;
}rect;


rect set_rect(ponto a,ponto c){
    ponto b,d;
    if (a.y>c.y && a.x < c.x) {
        b=set_ponto(c.x,a.y);
        d=set_ponto(a.x,c.y);
    }
    if(a.y>c.y && a.x > c.x){
        b=set_ponto(a.x,c.y);
        d=set_ponto(c.x,a.y);
    }
    if(a.y<c.y && a.x < c.x){
        b=set_ponto(a.x,c.y);
        d=set_ponto(c.x,a.y);
    }
    if(a.y<c.y && a.x > c.x){
        b=set_ponto(c.x,a.y);
        d=set_ponto(a.x,c.y);
    }
    rect f={a,b,c,d};
    return f;
}

void rect_print(rect f){
printf("O retangulo ABCD tem os pontos respetivamente: (%f,%f),(%f,%f),(%f,%f),(%f,%f)",f.a.x,f.a.y,f.b.x,f.b.y,f.c.x,f.c.y,f.d.x,f.d.y);
}

double rect_area(rect r){
    return (distancia(r.a,r.b)*distancia(r.b,r.c));
}

int ponto_dentro(rect r, ponto p){
    int flag=0;
    if (r.a.x<r.c.x) {
        if (p.x<r.a.x || p.x>r.c.x) {
                flag=1;
            }
        if (r.a.x>r.c.x) {
            if (p.x>r.a.x || p.x<r.c.x) {
                flag=1;
                }
        }
    }
    if (r.a.y<r.c.y) {
        if (p.y<r.a.y || p.y>r.c.y) {
                flag=1;
            }
        if (r.a.y>r.c.y) {
            if (p.y>r.a.y || p.y<r.c.y) {
                flag=1;
                }
        }
    }
    if (flag==0) {
        return 1;
    }
    return 0;
}

int rect_dentro(rect r1,rect r2){
    int flag=0;

    if (ponto_dentro(r1,r2.a)==0) {
        flag=1;
    }
    if (ponto_dentro(r1,r2.b)==0) {
        flag=1;
    }
    if (ponto_dentro(r1,r2.c)==0) {
        flag=1;
    }
    if (ponto_dentro(r1,r2.d)==0) {
        flag=1;
    }


    if (flag==0) {
        return 1;
    }
    return 0;
}

int main(int argc, char const *argv[]) {
  // int n;
  // printf("Quantos pontos: ");
  // scanf("%d",&n);
  // printf("\n");
  //
  // ponto list[n];
  //
  // ponto MaxA,MaxB;
  // double MaxDistance=0;
  //
  //
  // for(int j=0;j<n;j++){
  //   list[j]=read();
  // }
  //
  // // for(int k=0;k<n;k++){
  //   for(int j=k+1;j<n;j++) {
  //     if (distancia(list[k],list[j])>MaxDistance){
  //       MaxDistance=distancia(list[k],list[j]);
  //       MaxA=set(list[k].x,list[k].y);
  //       MaxB=set(list[j].x,list[j].y);
  //     }
  //   }
  // }
  //
  //
  //
  // printf("Distância maxima: %f\n",MaxDistance);
  //
  // printf("Ponto 1:");
  // ponto_print(MaxA);
  //
  // printf("\n");
  //
  // printf("Ponto 2:");
  // ponto_print(MaxB);

  ponto p={2,2};

  ponto a1={0,4};
  ponto b1={4,4};
  ponto c1={4,0};
  ponto d1={0,0};

  rect r1={a1,b1,c1,d1};

  ponto a2={1,3};
  ponto b2={1,3};
  ponto c2={3,1};
  ponto d2={1,1};

  rect r2={a2,b2,c2,d2};

  printf("%f \n",rect_area(r1));

  if (ponto_dentro(r1,p)) {
      printf("Ponto está dentro\n");
  }else{
      printf("Ponto está fora\n");
  }

  if (rect_dentro(r1,r2)) {
      printf("Rect está dentro\n");
  }else{
      printf("Rect está fora\n");
  }


  return 0;
}
