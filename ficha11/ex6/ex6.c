#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000


int w_file(char *file_name){
    int wdcount=0;

    FILE *palavras = fopen(file_name,"w");
    char str[MAX];

    fgets(str,MAX,stdin);
    while (!(strcmp(str,"\n")==0)) {
        wdcount++;
        fprintf(palavras,"%s",str);
        fgets(str,MAX,stdin);
    }
    fclose(palavras);

    return wdcount;
}

void maior(char *nome_ficheiro){
    FILE *palavras=fopen(nome_ficheiro,"r");
    char word[MAX],max_l[MAX];
    int max=0;
    while (fgets(word,MAX,palavras)!=NULL){
        if (max==0) {
            max=strlen(word);
            strcpy(max_l,word);
        }
        if (max<strlen(word)) {
            max=strlen(word);
            strcpy(max_l,word);
        }
    }
    printf("%s\n",max_l );
    fclose(palavras);
}

void par_impar(char *nome_ficheiro){
    FILE *file=fopen(nome_ficheiro,"r");
    FILE *par=fopen("par.txt","w");
    FILE *impar=fopen("impar.txt","w");

    char word[MAX];

    while (fgets(word,MAX,file)!=NULL) {
        if ((strlen(word)-1)%2==0) {
            fprintf(par,"%s",word);
        }else{
            fprintf(impar,"%s",word);
        }
    }
    fclose(file);
    fclose(par);
    fclose(impar);
}

void add_palavra(char *nome_ficheiro,char *palavra,int pos){
    FILE *r_file=fopen(nome_ficheiro,"r");
    int count=0,k=0;
    char vec[MAX][MAX];
    pos--;
    while (fgets(vec[count],MAX,r_file)!=NULL) {
        count++;
    }
    fclose(r_file);
    if (count==0) {
        for (int i = 0; i < pos+1; i++) {
            strcpy(vec[i],"\n");
        }

        strcpy(vec[pos],palavra);
    }else{
        count++;
        for (int i = count; i >= pos; i--){
            strcpy(vec[i+1],vec[i]);
        }
        strcpy(vec[pos],palavra);
    }
    FILE *w_file=fopen(nome_ficheiro,"w");
    while (!(strcmp(vec[k],"\0")==0)) {
        printf("%s\n",vec[k] );
        fprintf(w_file,"%s",vec[k]);
        k++;
    }
    fclose(w_file);
}

void rm_word(char *nome_ficheiro, char *palavra){
    FILE *file=fopen(nome_ficheiro,"r");
    char vec[MAX][MAX];
    int k=0;
    while (!(strcmp(vec[k],"\0")==0)) {
        k++;
    }
    for (int i = 0; i < strlen(vec); i++) {
        if ((strcmp(vec[i],palavra)==0) {
            vec[i]='\0';
            k=i;
        }
    }
    for (int i = k; i < strlen(vec); i++) {
        vec
    }
    fclose(file);
}


int main(int argc, char const *argv[]) {
    char file_name[MAX]="palavras.txt";

    printf("Escreva as palavras: \n");

    int totalwds=w_file(file_name);

    printf("Número de palavras: %d\n\n",totalwds );

    printf("Palavra com mais caracteres:\n");
    maior(file_name);


    par_impar(file_name);

    char word_to_add[MAX];
    printf("Que palavra adicionar ?\n");
    scanf("%s",word_to_add);

    printf("Adicionar a palavra ,%s, em que linha do ficheiro ?\n",word_to_add);
    int i=strlen(word_to_add);
    strcpy(&word_to_add[i],"\n");

    int linha=0;
    scanf("%d",&linha);

    add_palavra(file_name,word_to_add,linha);



    return 0;
}
