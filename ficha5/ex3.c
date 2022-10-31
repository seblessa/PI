#include <stdio.h>
#include <string.h>

int palindromo(char str[],int len){
    for(int i=0;i<len;i++){
            if (str[i]!=str[len-i-1]){
                return 0;
            }
    }
    return 1;
}

int main(int argc, char const *argv[]) {
    char str[100]="abcdecba";
    int len=(int)strlen(str);


    printf("%d\n",len );

    if(palindromo(str,len)==1){
        printf("É palindromo!!!\n");
    }else{
        printf("Não é palindromo!!\n" );
    }


  return 0;
}
