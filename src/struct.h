//--------------------------------------------------
//---------- Propriété de Ethan et Renato ----------
//--------------------------------------------------

// Fichier dans lequel sont définit les structures utilisés par main.c
#ifndef STRUCT_H // Si la constante n'est pas définie
#define STRUCT_H // On la définie
#define priorite_min 0 // Priorité minimum
#define priorite_max 5 // Priorité maximum

// Structure des processus
typedef struct Processus
{
	char Nom[30]; // Nom du processus
	int duree_execution; // durée d'exécution du processus
	int priorite; // priorité du processus
}Processus;

// Structure de la file des ordonnanceurs
typedef struct Ordonnenceur
{
	Processus proc; // Processus
	struct Ordonnenceur *next; // pointeur sur le processus suivant
}Ordonnenceur;

#endif