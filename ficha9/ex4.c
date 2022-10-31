#include <stdio.h>
#include <stdlib.h>

typedef struct data{
int dia, mes, ano;
} Data;


int comparar(Data d1, Data d2){
    if (d1.ano==d2.ano) {
        if (d1.mes==d2.mes) {
            if (d1.dia==d2.dia) {
                return 0;
            }else{
                if (d1.dia>d2.dia) {
                    return 1;
                }
                return -1;
            }
        }else{
            if (d1.mes>d2.mes) {
                return 1;
            }
            return -1;
        }
    }else{
        if (d1.ano>d2.ano) {
            return 1;
        }
        return -1;
    }
}



Data diff(Data d1, Data d2){
    int dia,mes,ano;
    if (comparar(d1,d2)==0) {
        dia=0;
        mes=0;
        ano=0;
    }else{
        if (comparar(d1,d2)==1) {
            dia=d1.dia-d2.dia;
            mes=d1.mes-d2.mes;
            ano=d1.ano-d2.ano;
        }else{
            dia=d2.dia-d1.dia;
            mes=d2.mes-d1.mes;
            ano=d2.ano-d1.ano;
        }

    }
    Data d={abs(dia),abs(mes),abs(ano)};
    return d;
}

Data read_Data(){
    int dia,mes,ano;
    scanf("%d",&dia);
    scanf("%d",&mes);
    scanf("%d",&ano);

    Data d={dia,mes,ano};

    return d;
}

void print_Data(Data d){
    printf("%d-", d.dia);
    printf("%d-", d.mes);
    printf("%d", d.ano);

}

void ordena_datas(Data vec_datas[], int size){
    Data temp;
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (comparar(vec_datas[i],vec_datas[j])==1) {
                temp=vec_datas[i];
                vec_datas[i]=vec_datas[j];
                vec_datas[j]=temp;
            }
        }
    }

}

Data menor_data(Data vec_datas[], int size){

    ordena_datas(vec_datas,size);

    return vec_datas[0];
}

void datas_ano(Data vec_datas[], int size, int ano){
    for (int i = 0; i < size; i++) {
        if (vec_datas[i].ano==ano) {
            print_Data(vec_datas[i]);
            printf("\n");
        }
    }
}

int main(int argc, char const *argv[]) {
    /*

    Data miguel={13,7,2002};
    Data seb={11,7,2003};
    Data d=diff(seb,miguel);

    printf("%d\n",comparar(seb,miguel));
    printf("%d %d %d \n",d.dia,d.mes,d.ano);

    */

    int size = 5;
    Data datas[size];

    for (int i=0; i<size ;i++) {
        datas[i]=read_Data();
    }

    for (int i=0;i<size;i++){
        print_Data(datas[i]);
        printf("\n");
    }

    printf("\n");
    ordena_datas(datas,size);

    for (int i=0;i<size;i++){
        print_Data(datas[i]);
        printf("\n");
    }

    printf("\n");

    print_Data(menor_data(datas,size));

    printf("\n");
    printf("\n");

    datas_ano(datas,size,2003);

    printf("\n");
    return 0;
}
