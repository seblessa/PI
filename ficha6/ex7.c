#include <stdio.h>
#include <string.h>

void ordenar(char str[]) {
    char temp;
    for (int i = 1; str[i]!='\0'; i++) {
        for (int j = 1; str[j]!='\0'; j++) {
            if (str[i-1]>str[j]) {
                temp=str[j-1];
                str[j-1]=str[j];
                str[j]=temp;
            }
        }
    }

}

int main(int argc, char const *argv[]) {
    printf("String: ");
    char str[100];
    gets(str);

    printf("%s\n",str);

    //ordenar(str);

    printf("%s\n",str);


    return 0;
}
