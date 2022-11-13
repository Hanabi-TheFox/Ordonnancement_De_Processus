//--------------------------------------------------
//---------- Propriété de Ethan et Renato ----------
//--------------------------------------------------

// Fichier dans lequel seront écrits toutes les fonctions déclarés par fonction.h

#include "fonction.h"
#include <stdio.h>
#include <stdlib.h>

void ajout_activite(Ordonnenceur *file, Processus processus){
	// On vérifie que la priorité du processus est comprise entre 0 et 5
	if(processus.priorite >= priorite_max)
		processus.priorite = priorite_max;
	else if(processus.priorite <= priorite_min)
		processus.priorite = priorite_min;
	// On crée un nouvel élément
	Ordonnenceur *new = malloc(sizeof(Ordonnenceur));
	if(new == NULL){
		printf("Erreur lors de l'allocation de mémoire\n");
		exit(1);
	}
	new->proc = processus;
	new->next = NULL;
	// On vérifie si la liste est vide
	if(file == NULL){
		// On lui donne la valeur de l'élément
		file = new;
	} else {
		// On crée un pointeur sur l'élément
		Ordonnenceur *tmp = file;
		// On vérifie si l'élément suivant est NULL et
		// si la priorité de l'élément suivant est inférieur à la priorité du processus
		while(tmp->next != NULL && tmp->next->proc.priorite < processus.priorite){
			// On avance dans la liste
			tmp = tmp->next;
		}
		// On donne la valeur de l'élément suivant à l'élément
		new->next = tmp->next;
		// On donne la valeur de l'élément à l'élément suivant
		tmp->next = new;
	}
}
/*
void supprimer_activite(Ordonnenceur *file, Processus processus){

}

int step(Ordonnenceur *file){
	return 0;
}

void run(Ordonnenceur *file){

}
*/