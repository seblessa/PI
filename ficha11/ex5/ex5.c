#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
    FILE *text1=fopen("text1.txt","r");
    FILE *text2=fopen("text2.txt","r");
    FILE *uniao=fopen("uniao.txt","w");

    char vec[20][20];
    int i=0;



    while(fgets(vec[i],1000,text1)){
        fputs(vec[i],uniao);
        i++;
    }
    i=0;
    while(fgets(vec[i],10000,text2)){
        fputs(vec[i],uniao);
        i++;
    }





    return 0;
}
