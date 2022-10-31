#include <stdio.h>
#include <stdlib.h>

typedef struct{
int info;
struct node *next;
}Node;


Node *novo_elemento(int info){
    Node *p=(Node *)malloc(sizeof(Node));
    if(p != NULL){
        p->info=info;
        p->next=NULL;
    }
    return p;
}

int main(int argc, char const *argv[]) {
    Node *novo;
    Node *head=NULL;


    int n;

    for (int i = 0; i < 5; i++) {
        scanf("%d",&n);
        novo = novo_elemento(n);
        novo -> next=head;
    }



    while (novo->info!=head) {
        printf("%d\n",novo->info );
    }


    return 0;
}
