#include <stdio.h>
#include <stdlib.h>

// Définition du nœud
typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

// Insertion en tête
void insertHead(Node **head, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;

    if (*head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        *head = newNode;
    } else {
        Node *last = (*head)->prev;

        newNode->next = *head;
        newNode->prev = last;

        last->next = newNode;
        (*head)->prev = newNode;

        *head = newNode; // nouvelle tête
    }
}

// Insertion en queue
void insertTail(Node **head, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;

    if (*head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        *head = newNode;
    } else {
        Node *last = (*head)->prev;

        newNode->next = *head;
        newNode->prev = last;

        last->next = newNode;
        (*head)->prev = newNode;
    }
}

// Affichage avant
void displayForward(Node *head) {
    if (head == NULL) {
        printf("Liste vide\n");
        return;
    }
    Node *temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(retour à la tête)\n");
}

// Affichage arrière
void displayBackward(Node *head) {
    if (head == NULL) {
        printf("Liste vide\n");
        return;
    }
    Node *last = head->prev;
    Node *temp = last;
    do {
        printf("%d -> ", temp->data);
        temp = temp->prev;
    } while (temp != last);
    printf("(retour à la fin)\n");
}

// Programme principal
int main() {
    Node *head = NULL;

    insertHead(&head, 10);
    insertHead(&head, 20);
    insertTail(&head, 30);
    insertTail(&head, 40);

    printf("Affichage avant :\n");
    displayForward(head);

    printf("Affichage arrière :\n");
    displayBackward(head);

    return 0;
}