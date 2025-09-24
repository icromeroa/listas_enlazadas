#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char nombre[20];
    struct Node* next; // siguiente nodo
    struct Node* prev; // nodo anterior
};

struct Node* createNode(const char* nombre) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Error: memoria no reservada\n");
        exit(1);
    }
    strcpy(newNode->nombre, nombre);
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void printListForward(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%s -> ", temp->nombre);
        temp = temp->next;
    }
    printf("NULL\n");
}

void printListBackward(struct Node* tail) {
    struct Node* temp = tail;
    while (temp != NULL) {
        printf("%s -> ", temp->nombre);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int main() {
    struct Node* name1 = createNode("Perseo");
    struct Node* name2 = createNode("Paris");
    struct Node* name3 = createNode("Aquiles");
    struct Node* name4 = createNode("Poseidón");

    // enlazar hacia adelante
    name1->next = name2;
    name2->next = name3;
    name3->next = name4;

    // enlazar hacia atrás
    name2->prev = name1;
    name3->prev = name2;
    name4->prev = name3;

    printf("Recorrido hacia adelante:\n");
    printListForward(name1);

    printf("\nRecorrido hacia atrás:\n");
    printListBackward(name4);

    // liberar memoria
    free(name1);
    free(name2);
    free(name3);
    free(name4);

    return 0;
}