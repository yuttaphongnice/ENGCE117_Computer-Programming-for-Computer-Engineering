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

int main() {
    AddNode(40);
    AddNode(30);
    AddNode(20);
    AddNode(10);
    ShowAll(); //10, 20, 30, 40
    UpdateNode(10, 99);
    ShowAll(); //99, 20, 30, 40
    UpdateNode(10, 98);
    ShowAll(); //99, 20, 30, 40
    return 0;
}
