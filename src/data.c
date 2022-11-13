//--------------------------------------------------
//---------- Propriété de Ethan et Renato ----------
//--------------------------------------------------

// Fichier dans lequel seront écrits toutes les fonctions déclarés par data.h

#include "struct.h"
#include "fonction.h"
#include "data.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lecture_data(){
	FILE *fichier = fopen("data/processus.csv", "r");
	if(fichier == NULL){
		printf("Impossible d'ouvrir le fichier data.txt\n");
		exit(1);
	}
	char ligne[100];
	fgets(ligne, 100, fichier); // On ne prend pas en compte la première ligne
	while(fgets(ligne, 100, fichier) != NULL){
		Processus processus;
		char *token = strtok(ligne, ";");
		strcpy(processus.Nom, token);
		token = strtok(NULL, ";");
		processus.duree_execution = atoi(token);
		token = strtok(NULL, ";");
		processus.priorite = atoi(token);
		ajout_activite(processus);
	}
	fclose(fichier);
}