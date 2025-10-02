#include <stdio.h>
#include <stdlib.h>

// Définition d'un nœud de la liste simplement chaînée
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Fonction pour insérer un élément en tête (utile pour créer la liste)
Node* insertHead(Node* head, int value) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

// Fonction pour afficher la liste
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Supprimer toutes les occurrences d’un élément
Node* deleteOccurrences(Node* head, int value) {
    Node* temp = head;
    Node* prev = NULL;

    while (temp != NULL) {
        if (temp->data == value) {
            if (prev == NULL) {
                // Suppression en tête
                head = temp->next;
                free(temp);
                temp = head;
            } else {
                prev->next = temp->next;
                free(temp);
                temp = prev->next;
            }
        } else {
            prev = temp;
            temp = temp->next;
        }
    }
    return head;
}

int main() {
    Node* head = NULL;

    // Création d’une liste : 3 -> 2 -> 3 -> 4 -> 3
    head = insertHead(head, 3);
    head = insertHead(head, 4);
    head = insertHead(head, 3);
    head = insertHead(head, 2);
    head = insertHead(head, 3);

    printf("Liste initiale :\n");
    display(head);

    int value;
    printf("Entrez la valeur à supprimer : ");
    scanf("%d", &value);

    head = deleteOccurrences(head, value);

    printf("Liste après suppression :\n");
    display(head);

    return 0;
}
