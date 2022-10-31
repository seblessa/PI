#include <stdio.h>
#include <string.h>
#include "input.h"

extern int NAlunos;
extern int NDisc;
extern DISCIPLINA Disc[];
extern ALUNO Alunos[];

void print_Aluno(int i){
    printf("%s %s\n",Alunos[i].codigo,Alunos[i].nome);
}

void procura_nome(char palavranome[]){
    printf("Alunos cujo nome inclui ");
    printf("%s\n\n",palavranome );
    for (int i=0;  i< NAlunos; i++) {
        if (strstr(Alunos[i].nome,palavranome)) {
            print_Aluno(i);
        }
    }
}

int codigo2Aluno( char codigo[],char nome[]){
    char *p=nome;
    for (int i = 0; i < NAlunos; i++) {
        if (strstr(Alunos[i].codigo,codigo)) {
            for (int j=0;j<strlen(Alunos[i].nome);j++) {
                *(p+j)=Alunos[i].nome[j];
            }
            return 1;
        }
    }
    return 0;
}

int disciplinas(char nome[]){
    int number=0;
    for (int i = 0; i<NAlunos; i++) {
        if (strstr(Alunos[i].nome,nome)){
            number=i;
        }
    }
    printf("Disciplinas:\n");
    printf("%d\n",Alunos[number].nd );
    for (int i = 0; i < Alunos[number].nd; i++) {
        printf("%s\n",Disc[Alunos[number].disc[i]-1].nome);
    }
    printf("\n");
    return Alunos[number].nd;
}

int alunos_de_disciplina(char disciplina[], int indices[]){
    int n_disciplina,count=0;
    for (int i = 0; i < NDisc; i++) {
        if ((strcmp(Disc[i].nome,disciplina)==0)) {
            n_disciplina=i;
        }
    }
    for (int i = 0; i < NAlunos; i++) {
        for (int j = 0; j < Alunos[i].nd; j++) {
            if (Alunos[i].disc[j]==n_disciplina) {
                indices[count]=i;
                count++;
            }
        }
    }
    return count;
}

void print_alunos_curso(char curso[]){
    char curso_do_aluno[MAX];
    for (int i = 0; i < NAlunos; i++) {
        curso_do_aluno[0]=Alunos[i].codigo[4];
        curso_do_aluno[1]=Alunos[i].codigo[5];
        curso_do_aluno[2]=Alunos[i].codigo[6];
        if ((strcmp(curso_do_aluno,curso)==0)) {
            print_Aluno(i);
        }
    }
}

int numero_medio(char curso[]){
    int total_alunos=0,total_cadeiras=0;
    char curso_do_aluno[3];
    for (int i = 0; i < NAlunos; i++) {
        curso_do_aluno[0]=Alunos[i].codigo[4];
        curso_do_aluno[1]=Alunos[i].codigo[5];
        curso_do_aluno[2]=Alunos[i].codigo[6];
        if ((strcmp(curso_do_aluno,curso)==0)) {
            total_alunos++;
            total_cadeiras+=Alunos[i].nd;
        }
    }
    return(total_cadeiras/total_alunos);
}



int main(int argc, char const *argv[]) {
    procura_nome("Maria");

    printf("\n");

    char nome[MAXNOME];
    char num[MAX]="2001018003";

    codigo2Aluno(num,nome);

    printf("Aluno com o número %s chama-se %s e tem as disciplinas: \n\n",num,nome);

    disciplinas(nome);

    int num;
    char disciplina[]="Compiladores";
    int indices[MAXNOME];
    num=alunos_de_disciplina(disciplina,indices);
    printf("%d\n",num );
    for (int i = 0; i < num; i++) {
        print_Aluno(indices[i]);
    }

    char curso[3]="020";
    printf("Número médio de cadeiras no %s\n",curso );
    printf("%d\n",numero_medio(curso));




 }
