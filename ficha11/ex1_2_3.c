#include <stdio.h>
#include <string.h>
#include <ctype.h>


int numero_linhas(char *nome_ficheiro){
    FILE *out_file = fopen("dados.txt","r");
    int i=0;
    char line[100];
    while (fgets(line,100,out_file)!=NULL) {
        i++;
    }
    fclose(out_file);
    return i;
}



int main(int argc, char const *argv[]) {
    FILE *in_file = fopen("dados.txt","w");

    int n;
    printf("Número de linhas: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++) {
        fprintf(in_file, "linha %d\n", i+1);
    }

    fclose(in_file);

    FILE *out_file = fopen("dados.txt","r");
    int size=100;
    char vec[n][size];


    int j=0;
    while (fgets(vec[j],size,out_file)!=NULL) {
        j++;
    }
    for (int i = 0; i < n; i++) {
        printf("%s",vec[i] );
    }
    fclose(in_file);

    printf("\n" );


    printf("%d\n",numero_linhas("dados.txt"));


    return 0;
}
