//--------------------------------------------------
//---------- Propriété de Ethan et Renato ----------
//--------------------------------------------------

// Fichier dans lequel sont définit les structures utilisés par main.c
#ifndef STRUCT_H // Si la constante n'est pas définie
#define STRUCT_H // On la définie
#define priorite_min 0 // Priorité minimum
#define priorite_max 5 // Priorité maximum
#if priorite_min > priorite_max // Si la priorité minimum est supérieur à la priorité maximum
#error "La priorité minimum est supérieur à la priorité maximum" // On affiche une erreur
#endif // Fin de la condition
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Structure des processus
typedef struct Processus
{
	char char_Nom[50]; // Nom du processus
	int int_duree_execution; // durée d'exécution du processus
	int int_priorite; // priorité du processus (compris entre 0 et 5)
}Processus;

// Structure de la file des ordonnanceurs
typedef struct Ordonnenceur
{
	Processus proc; // Processus
	struct Ordonnenceur *next; // pointeur sur le processus suivant
}Ordonnenceur;

// Comme le projet n'utilise qu'une seule file, on peut définir des variables globales
// Afin de simplifier et d'optimiser le code.

// cet attribue permet de ne plus afficher l'erreur "defined but not used"
// engandré par l'utilisation des variable globale lors de la compilation du programme.
#define UNUSED_VAR     __attribute__ ((unused))
#ifndef head
UNUSED_VAR static Ordonnenceur *head = NULL; // Tête de la file
#endif
#ifndef tail
UNUSED_VAR static Ordonnenceur *tail = NULL; // Queue de la file
#endif

#endif