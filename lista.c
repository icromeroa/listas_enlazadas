#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
    //Node* es un puntero
};

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL){
        printf("Error: memoria no reservada");
        exit(1);
    }

    newNode->data = data;
    //A la posición data del struct Node, asignele la data que se le pasa al struct Node createNode
    newNode->next = NULL;
    //Next podría verse como un puntero
    return newNode;
};

void printList(struct Node* head){
    struct Node* temp = head;
    while (temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
};

int main(){ 
    struct Node* head = createNode(10); 
    struct Node* first = createNode(11); 
    struct Node* second = createNode(12); 
    struct Node* third = createNode(13);
    head->next = first;
    //en la posición next se apunta al siguiente
    first->next = second;
    second->next = third;

    printList(head);

    free(head);
    free(first);
    free(second);
    free(third);

    return 0;

};



//Ventajas

/*



*/