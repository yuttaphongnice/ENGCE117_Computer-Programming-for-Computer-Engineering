//ยุทธพงค์ ขอดขันคำ 65543206030-0 Sec_3

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* start = NULL;

void AddNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = start;
    start = newNode;
}

void ShowAll(){
    struct Node* current = start;
    while(current != NULL){
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void Swap(int val1, int val2){
    struct Node* current = start;
    struct Node* node1 = NULL;
    struct Node* node2 = NULL;

    while(current != NULL){
        if(current->data == val1){
            node1 = current;
        }else if(current->data == val2){
            node2 = current;
        }

        if(node1 != NULL && node2 != NULL){
            break;
        }
        current = current->next;
    }

    if(node1 != NULL && node2 != NULL){
        int temp = node1->data;
        node1->data = node2->data;
        node2->data = temp;
    }else{
        printf("Node not found\n");
    }
}

int main(){
    AddNode(40);
    AddNode(30);
    AddNode(20);
    AddNode(10);
    ShowAll(); //10, 20, 30, 40

    Swap(20, 30);
    ShowAll(); //10, 30, 20, 40

    Swap(40, 10);
    ShowAll(); //40, 30, 20, 10
    return 0;
}
