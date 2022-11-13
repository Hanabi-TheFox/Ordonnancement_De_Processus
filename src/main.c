//--------------------------------------------------
//---------- Propriété de Ethan et Renato ----------
//--------------------------------------------------

// Fichier Main
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonction.h"
#include "file.h"

int main(){
	Ordonnenceur *head = NULL;
	Ordonnenceur *tail = NULL;
	Processus p;
	strcpy(p.Nom, "Processus 1");
	p.duree_execution = 10;
	p.priorite = 1;
	ajouter_Ordonnenceur(p);
	strcpy(p.Nom, "Processus 2");
	p.duree_execution = 3;
	p.priorite = 3;
	ajouter_Ordonnenceur(p);
	strcpy(p.Nom, "Processus 3");
	p.duree_execution = 4;
	p.priorite = 0;
	ajouter_Ordonnenceur(p);
	afficher_Ordonnenceur();
	defiler_Ordonnenceur();
	afficher_Ordonnenceur();
	/*
	Processus proc;
	strcpy(proc.Nom, "Processus 1");
	proc.duree_execution = 10;
	proc.priorite = 3;
	Ordonnenceur *file = NULL;
	ajout_activite(file,proc);
	if(file == NULL){
		printf("La file est vide");
	} else {
		printf("La file n'est pas vide");
	printf("Nom du processus : %s\n", file->proc.Nom);
	printf("Durée d'exécution du processus : %d\n", file->proc.duree_execution);
	printf("Priorité du processus : %d\n", file->proc.priorite);
	}
	*/
	return 0;
}