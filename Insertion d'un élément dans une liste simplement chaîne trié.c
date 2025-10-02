#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Insérer un élément dans une liste triée
Node* insertSorted(Node* head, int value) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL || value < head->data) {
        newNode->next = head;
        return newNode;
    }

    Node* temp = head;
    while (temp->next != NULL && temp->next->data < value) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

void display(Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;

    head = insertSorted(head, 5);
    head = insertSorted(head, 2);
    head = insertSorted(head, 8);
    head = insertSorted(head, 1);
    head = insertSorted(head, 3);

    printf("Liste triée après insertions :\n");
    display(head);

    return 0;
}
