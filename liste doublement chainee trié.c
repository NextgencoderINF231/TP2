#include <stdio.h>
#include <stdlib.h>

// Définition du nœud
typedef struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

// Création d’un nouveau nœud
Node* creerNoeud(int valeur) {
    Node* nouveau = malloc(sizeof(Node));
    if (nouveau == NULL) {
        perror("Erreur d’allocation");
        exit(1);
    }
    nouveau->data = valeur;
    nouveau->prev = NULL;
    nouveau->next = NULL;
    return nouveau;
}

// Insertion dans une liste doublement chaînée triée (ordre croissant)
void insererTrie(Node **head, int valeur) {
    Node* nouveau = creerNoeud(valeur);

    // Si la liste est vide
    if (*head == NULL) {
        *head = nouveau;
        return;
    }

    Node* courant = *head;

    // Cas 1 : insertion en tête
    if (valeur <= courant->data) {
        nouveau->next = courant;
        courant->prev = nouveau;
        *head = nouveau;
        return;
    }

    // Parcours jusqu’à trouver la bonne position
    while (courant->next != NULL && courant->next->data < valeur) {
        courant = courant->next;
    }

    // Cas 2 : insertion en fin
    if (courant->next == NULL) {
        courant->next = nouveau;
        nouveau->prev = courant;
    }
    // Cas 3 : insertion au milieu
    else {
        nouveau->next = courant->next;
        nouveau->prev = courant;
        courant->next->prev = nouveau;
        courant->next = nouveau;
    }
}

// Affichage de la liste
void afficherListe(Node* head) {
    Node* courant = head;
    printf("Liste : ");
    while (courant != NULL) {
        printf("%d ", courant->data);
        courant = courant->next;
    }
    printf("\n");
}

// Libération de la mémoire
void libererListe(Node* head) {
    Node* tmp;
    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}

int main() {
    Node* liste = NULL;

    insererTrie(&liste, 10);
    insererTrie(&liste, 5);
    insererTrie(&liste, 20);
    insererTrie(&liste, 15);
    insererTrie(&liste, 7);

    afficherListe(liste);

    libererListe(liste);
    return 0;
}