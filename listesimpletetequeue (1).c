#include <stdio.h>
#include <stdlib.h>

// Définition du nœud
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Insertion en tête
void insertHead(Node **head, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;

    if (*head == NULL) {
        newNode->next = newNode; // le nœud pointe sur lui-même
        *head = newNode;
    } else {
        Node *temp = *head;
        while (temp->next != *head) {
            temp = temp->next; // aller jusqu'au dernier
        }
        newNode->next = *head;
        temp->next = newNode;
        *head = newNode; // mise à jour de la tête
    }
}

// Insertion en queue
void insertTail(Node **head, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;

    if (*head == NULL) {
        newNode->next = newNode;
        *head = newNode;
    } else {
        Node *temp = *head;
        while (temp->next != *head) {
            temp = temp->next; // aller jusqu'au dernier
        }
        temp->next = newNode;
        newNode->next = *head;
    }
}

// Affichage de la liste
void display(Node *head) {
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

// Programme principal
int main() {
    Node *head = NULL;

    insertHead(&head, 10);
    insertHead(&head, 20);
    insertTail(&head, 30);
    insertTail(&head, 40);

    display(head);

    return 0;
}