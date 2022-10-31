#include <stdio.h>
#include <ctype.h>
#include <string.h>

_Bool todos_letras(char str[]){
    for (int i=0;i<strlen(str);i++){
        if (isalpha(str[i])) {
        }else{
            return 0;
        }
    }
    return 1;
}


int main(int argc, char const *argv[]) {



    char str[100]="abc.";


    printf("%d\n", todos_letras(str));




    return 0;
}
