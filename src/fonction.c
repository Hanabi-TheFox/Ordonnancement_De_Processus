//--------------------------------------------------
//---------- Propriété de Ethan et Renato ----------
//--------------------------------------------------

// Fichier dans lequel seront écrits toutes les fonctions déclarés par fonction.h
#include "fonction.h"

void ajout_activite(Processus struct_Processus){
	// La fonction existe déjà dans file.c, nous n'avons qu'à l'appeler.
	ajouter_Ordonnenceur(struct_Processus);
}

int step(){
	if(est_vide_Ordonnenceur())
	{
		return 0;
	}
	else
	{
		// On execute le processus --> On affiche son contenue
		printf("Nom du processus : %s\n", tete_Ordonnenceur().char_Nom);
		printf("Durée d'exécution du processus : %d\n", tete_Ordonnenceur().int_duree_execution);
		printf("Priorité du processus : %d\n", tete_Ordonnenceur().int_priorite);
		printf("Exécution du processus en cours...\n\n");
		// Et on attend le temps de la durée d'éxecution du processus.
		sleep(tete_Ordonnenceur().int_duree_execution);
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
	// On execute les processus tant qu'il y en à.
	while(step());
	printf("Tous les processus ont été exécutés\n");
}