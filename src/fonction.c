//--------------------------------------------------
//---------- Propriété de Ethan et Renato ----------
//--------------------------------------------------

// Fichier dans lequel seront écrits toutes les fonctions déclarés par fonction.h

#include "fonction.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ajout_activite(Processus processus){
	ajouter_Ordonnenceur(processus);
}

int step(){
	if(est_vide_Ordonnenceur()){
		return 0;
	}
	else{
		printf("Nom du processus : %s\n", tete_Ordonnenceur().Nom);
		printf("Durée d'exécution du processus : %d\n", tete_Ordonnenceur().duree_execution);
		printf("Priorité du processus : %d\n", tete_Ordonnenceur().priorite);
		printf("Exécution du processus en cours...\n\n");
		sleep(tete_Ordonnenceur().duree_execution);
		defiler_Ordonnenceur();
		return 1;
	}
}

void run(){
	if(est_vide_Ordonnenceur())
	{
		printf("Il n'y à aucun processus à éxecuter.\n");
		exit(1);
	}
	while(step());
	printf("Tous les processus ont été exécutés\n");
}