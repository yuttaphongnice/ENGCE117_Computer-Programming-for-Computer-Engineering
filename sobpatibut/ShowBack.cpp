//ยุทธพงค์ ขอดขันคำ 65543206030-0 Sec_3

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

void ShowBack() {
    struct Node* current = start;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    AddNode(10);
    AddNode(20);
    AddNode(30);
    AddNode(40);
    ShowBack();
    return 0;
}
