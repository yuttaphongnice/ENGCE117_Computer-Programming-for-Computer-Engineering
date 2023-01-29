//ยุทธพงค์ ขอดขันคำ 65543206030-0 Sec_3
//https://www.youtube.com/watch?v=CDcFJpPHVfU

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* start = NULL;

void AddNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = start;
    start = newNode;
}

void ShowAll() {
    struct Node* ptr = start;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void UpdateNode(int data, int newData) {
    struct Node* ptr = start;
    while (ptr != NULL) {
        if (ptr->data == data) {
            ptr->data = newData;
            break;
        }
        ptr = ptr->next;
    }
}

void ShowBack(struct Node *start)
{
    struct Node* current = start;
    if (current == NULL)
        return;
    ShowBack(current->next);
    printf("%d ", current->data);

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
    }
}

int main() {
    printf("AddNode ----| ");
    AddNode(40);
    AddNode(30);
    AddNode(20);
    AddNode(10);
    ShowAll(); //10, 20, 30, 40
    UpdateNode(10, 99);
    printf("UpDateNode ----| ");
    ShowAll(); //99, 20, 30, 40
    printf("ShowBack ----| ");
    ShowBack(start);
    printf("\n");
    printf("Swap ----| ");
    Swap(20, 30);
    ShowAll(); //10, 30, 20, 40
    printf("Swap ----| ");
    Swap(40, 99);
    ShowAll(); //40, 30, 20, 10
    return 0;
}
