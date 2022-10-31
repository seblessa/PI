#include <ctype.h>
#include <stdio.h>
#include <string.h>

void capitalizar(char str[]){
    for(int i=0;i<strlen(str);i++){
        if (isalpha(str[i])){
            str[i]=toupper(str[i]);
        }
    }
}
int main(int argc, char const *argv[]) {
    char str[10]={"aeiou=ayo"};
    printf("%s\n",str );
    capitalizar(str);
    printf("%s\n",str );
    return 0;
}
