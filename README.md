## Introduction

Ce projet présente des implémentations en langage C pour diverses opérations sur des listes chaînées, y compris les listes simplement chaînées, doublement chaînées, et circulaires. Les fonctionnalités incluent l'insertion et la suppression d'éléments tout en maintenant un ordre trié pour certaines opérations.

## =>Fonctionnalités

1. **Suppression de toutes les occurrences d'un élément dans une liste simplement chaînée.**
2. **Insertion d'un élément dans une liste doublement chaînée triée.**
3. **Insertion en tête et en queue dans une liste simplement chaînée circulaire.**
4. **Insertion en tête et en queue dans une liste doublement chaînée circulaire.**
5. **Insertion d'un élément dans une liste simplement chaînée triée.**

## =>Instructions d'utilisation

### Prérequis

- Un compilateur C (tel que GCC) installé sur votre système.
- Connaissance de base du langage C et de la gestion des pointeurs.

### Compilation

Pour compiler le code, exécutez la commande suivante dans votre terminal :

```bash
gcc -o liste_chaine liste_chaine.c
```

### Exécution

Pour exécuter le programme, entrez la commande suivante :

```bash
./liste_chaine
```

## =>Mode d'emploi

Les utilisateurs peuvent interagir avec les différentes fonctionnalités du programme via l'entrée standard. Les prompts guideront l'utilisateur à travers les différentes opérations de la liste.

## >Analyse de Complexité

### 1. **Suppression de toutes les occurrences dans une liste simplement chaînée**
- **Complexité temporelle :** O(n), où n est le nombre d'éléments dans la liste. Dans le pire des cas, chaque élément doit être vérifié.
- **Complexité spatiale :** O(1), car l'algorithme n'utilise pas d'espace supplémentaire significatif.

### 2. **Insertion dans une liste doublement chaînée triée**
- **Complexité temporelle :** O(n), car il peut être nécessaire de parcourir la liste jusqu'à n éléments pour trouver la position appropriée pour l'insertion.
- **Complexité spatiale :** O(1), car la mémoire pour un seul nœud est allouée à chaque insertion.

### 3. **Insertion en tête et en queue dans une liste simplement chaînée circulaire**
- **Complexité temporelle :**
  - Insertion en tête : O(1).
  - Insertion en queue : O(n), car il faut parcourir la liste pour trouver le dernier nœud à ajouter.
- **Complexité spatiale :** O(1) pour l'insertion (mémoire pour un nœud).

### 4. **Insertion en tête et en queue dans une liste doublement chaînée circulaire**
- **Complexité temporelle :**
  - Insertion en tête : O(1).
  - Insertion en queue : O(1) car on peut accéder directement au précédent dernier nœud.
- **Complexité spatiale :** O(1) pour l'insertion (mémoire pour un nœud).

### 5. **Insertion d'un élément dans une liste simplement chaînée triée**
- **Complexité temporelle :** O(n), dans le cas où l'élément est inséré à la fin de la liste.
- **Complexité spatiale :** O(1), car nous n'utilisons pas de structures de données supplémentaires.

## =>Structure des Données

- **Liste simplement chaînée :** Représentée par des nœuds contenant un champ de données et un pointeur vers le nœud suivant.
- **Liste doublement chaînée :** Semblable à la liste simplement chaînée mais avec des pointeurs vers le nœud précédent.
- **Liste circulaire :** La liste où le dernier nœud pointe vers le premier nœud.

## Conclusion

Ce projet illustre les bases de la manipulation des listes chaînées en C. À travers ces différentes fonctionnalités, l'utilisateur apprend à gérer dynamiquement une structure de données essentielle tout en améliorant ses compétences en programmation.
