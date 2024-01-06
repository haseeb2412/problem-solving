#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int  data;
    struct Node* next;
};

struct Node* createNode(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if(newNode == NULL){
        printf("memory allocation failed");
        exit(1);
    }
    newNode->data =value;
    newNode->next =NULL;
    return newNode;
}
void insertAtBeginning(struct Node** head,int value){
    struct Node* newNode =createNode(value);
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
    
}

int main(){
    struct Node* mylist = NULL;
    insertAtBeginning(&mylist,23);
    insertAtBeginning(&mylist,234);
    insertAtBeginning(&mylist,236);
}