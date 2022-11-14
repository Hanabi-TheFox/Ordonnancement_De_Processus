//--------------------------------------------------
//---------- Propriété de Ethan et Renato ----------
//--------------------------------------------------

// Fichier dans lequel seront écrits toutes les fonctions déclarés par data.h
#include "data.h"

void lecture_data(){
	FILE *FILE_fichier = fopen("data/processus.csv", "r");
	if(FILE_fichier == NULL)
	{
		printf("Impossible d'ouvrir le fichier processus.csv\n");
		exit(1);
	}
	char char_ligne[100];
	fgets(char_ligne, 100, FILE_fichier); // On ne prend pas en compte la première ligne
	while(fgets(char_ligne, 100, FILE_fichier) != NULL)
	{
		// On vérifie si "ligne" possède 2 fois le char ";"
		int int_i = 0;
		int int_nb_semicolon = 0;
		while(char_ligne[int_i] != '\0')
		{
			if(char_ligne[int_i] == ';')
			{
				int_nb_semicolon++;
			}
			int_i++;
		}
		if(int_nb_semicolon != 2)
		{
			printf("Le fichier processus.csv est mal formé\n");
			exit(1);
		}
		// On récupère les données de la ligne
		Processus struct_Processus;
		char *pchar_token = strtok(char_ligne, ";");
		strcpy(struct_Processus.char_Nom, pchar_token);
		pchar_token = strtok(NULL, ";");
		struct_Processus.int_duree_execution = atoi(pchar_token);
		pchar_token = strtok(NULL, ";");
		struct_Processus.int_priorite = atoi(pchar_token);
		ajout_activite(struct_Processus);
	}
	fclose(FILE_fichier);
}