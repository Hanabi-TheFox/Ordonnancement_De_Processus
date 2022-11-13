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

// Structure des processus
typedef struct Processus
{
	char Nom[30]; // Nom du processus
	int duree_execution; // durée d'exécution du processus
	int priorite; // priorité du processus (compris entre 0 et 5)
}Processus;

// Structure de la file des ordonnanceurs
typedef struct Ordonnenceur
{
	Processus proc; // Processus
	struct Ordonnenceur *next; // pointeur sur le processus suivant
}Ordonnenceur;

#ifndef head
static Ordonnenceur *head = NULL; // Tête de la file
#endif
#ifndef tail
static Ordonnenceur *tail = NULL; // Queue de la file
#endif

#endif