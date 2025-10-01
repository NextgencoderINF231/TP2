# => Introduction

Ce projet contient des implémentations de différentes opérations sur des listes chaînées en langage C. Les opérations incluent la suppression d'éléments, l'insertion d'éléments dans des listes triées, ainsi que l'insertion dans des listes circulaires. Ce document fournit une description des fonctionnalités implémentées, des instructions d'utilisation et des exemples.

# => Fonctionnalités

1. **Suppression de toutes les occurrences d'un élément dans une liste simplement chaînée :**
   - Cette opération permet de lire un élément depuis l'utilisateur et de le supprimer de toutes les occurrences présentes dans la liste.

2. **Insertion d'un élément dans une liste simplement chaînée triée :**
   - Cette fonctionnalité permet d'insérer un nouvel élément tout en maintenant l'ordre trié de la liste.

3. **Insertion d'un élément dans une liste doublement chaînée triée :**
   - Similar à la liste simplement chaînée, cette fonction insère un nouvel élément dans une liste doublement chaînée tout en garantissant qu'elle reste triée.

4. **Insertion en tête et en queue dans une liste simplement chaînée circulaire :**
   - Cette opération permet d'ajouter des éléments à la fois en début et en fin de la liste circulaire simplement chaînée.

5. **Insertion en tête et en queue dans une liste doublement chaînée circulaire :**
   - Fonctionnalité similaire à la précédente, mais pour une liste doublement chaînée circulaire.

## Instructions d'utilisation

### Prérequis

- Un compilateur C (comme GCC) doit être installé sur votre machine.
- Familiarité de base avec le langage C et la gestion des pointeurs.

# => Compilation

Pour compiler le programme, exécutez la commande suivante dans votre terminal :

```bash
gcc -o liste_chaine liste_chaine.c
```

# => Exécution

Après compilation, vous pouvez exécuter le programme avec la commande :

```bash
./liste_chaine
```

# => Échantillons d'utilisation

1. **Suppression d'un élément :**
   - Entrez un élément lors de la demande, et toutes les occurrences de cet élément seront supprimées de la liste.

2. **Insertion dans une liste triée :**
   - Entrez un élément à insérer dans la liste triée et le programme l'ajoutera à la bonne position.

3. **Insertion dans une liste doublement chaînée triée :**
   - Le fonctionnement est similaire à l'insertion dans une liste simplement chaînée triée, mais la structure utilisée est une liste doublement chaînée.

4. **Insertion en tête et en queue :**
   - Pour ajouter à la tête ou à la queue d'une liste circulaire, le programme demandera quelle opération réaliser.

# =>Structure des Données

- Les listes simplement chaînées sont représentées par des nœuds contenant un champ de données et un pointeur vers le nœud suivant.
- Les listes doublement chaînées contiennent à la fois des pointeurs vers le nœud suivant et précédant.
- Les listes circulaires pointent vers le premier nœud à partir de la queue.

# => Exemples de Code

Voici un aperçu des structures de données et des fonctions pour la suppression et l'insertion dans les listes chaînées :

```c
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Fonction pour supprimer toutes les occurrences d'un élément
void deleteOccurrences(Node** head, int value) {
    // Implémentation de la fonction
}

// Fonction pour insérer un élément dans une liste triée
void insertSorted(Node** head, int value) {
    // Implémentation de la fonction
}

# => Conclusion

Ce projet illustre les bases des opérations sur les listes chaînées en C. L'intégration de diverses fonctionnalités permet de mieux comprendre la manipulation dynamique de la mémoire et les structures de données. Veuillez vous assurer d'exécuter des tests sur les différentes fonctionnalités pour comprendre pleinement leur fonctionnement.
