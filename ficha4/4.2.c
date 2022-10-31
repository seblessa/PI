#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
    char l,str[100];
    int i=0,count=0;
    scanf("%c", &l );
    while (l!='.') {
        str[i]=l;
        i++;
        scanf("%c", &l );
    }

    for(int j=0;strlen(str);j++){
        if(97 <= str[j] || str[j] >= 122)
            count++;
    }




    printf("%s\n",str );
    printf("A frase contém %d letras\n",count);



    //97 <= x >= 122




    return 0;
}
