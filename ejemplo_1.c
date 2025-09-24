#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    char nombre[20];
    struct Node* next;
};

struct Node* createNode(const char* nombre){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL){
        printf("Error: memoria no reservada");
        exit(1);
    }

/*
Hay que cambiar la firma de la función para recibir 
un char* (una cadena) y usar strcpy para copiar el 
contenido en el arreglo nombre[20]
*/

    strcpy(newNode->nombre, nombre);
    newNode->next = NULL;

    return newNode;
}


void printList(struct Node* name1){
    struct Node* temp = name1;
    while (temp != NULL){
        printf("%s -> ", temp->nombre);
        temp = temp->next;
    }
    printf("NULL\n");
};


int main(){
    struct Node* name1 = createNode("Marta");
    struct Node* name2 = createNode("Luisa");
    struct Node* name3 = createNode("Andrea");
    struct Node* name4 = createNode("Maria");

    name1->next = name2;
    name2->next = name3;
    name3->next = name4;

    printList(name1);

    free(name1);
    free(name2);
    free(name3);
    free(name4);

    return 0;

};