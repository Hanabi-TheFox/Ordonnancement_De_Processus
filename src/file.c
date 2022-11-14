//--------------------------------------------------
//---------- Propriété de Ethan et Renato ----------
//--------------------------------------------------

// Fichier dans lequel seront écrits toutes les fonctions déclarés par file.h
#include "file.h"

int est_vide_Ordonnenceur(){
	if(head == NULL && tail == NULL)
	{
		return 1;
	}
	return 0;
}

Processus tete_Ordonnenceur(){
	if(est_vide_Ordonnenceur())
	{
		printf("La file est vide\n");
		exit(1);
	}
	return head->proc;
}

Processus queue_Ordonnenceur(){
	if(est_vide_Ordonnenceur())
	{
		printf("La file est vide\n");
		exit(1);
	}
	return tail->proc;
}

void afficher_Ordonnenceur(){
	if(est_vide_Ordonnenceur())
	{
		printf("La file est vide\n");
		exit(1);
	}
	Ordonnenceur *struct_Ordonnenceur_tmp = head;
	printf("Affichage de la file des processus :\n\n");
	while(struct_Ordonnenceur_tmp != NULL)
	{
		printf("Nom du processus : %s\n", struct_Ordonnenceur_tmp->proc.char_Nom);
		printf("Durée d'exécution du processus : %d\n", struct_Ordonnenceur_tmp->proc.int_duree_execution);
		printf("Priorité du processus : %d\n", struct_Ordonnenceur_tmp->proc.int_priorite);
		struct_Ordonnenceur_tmp = struct_Ordonnenceur_tmp->next;
		printf("\n");
	}
}

	void ajouter_Ordonnenceur(Processus struct_Processus){
		// On vérifie si la variable priorité est compris entre les valeurs attendus.
		if(struct_Processus.int_priorite < priorite_min || struct_Processus.int_priorite > priorite_max)
		{
			printf("La priorité du processus est incorrecte\n");
			exit(1);
		}
		Ordonnenceur *struct_Ordonnenceur_tmp = head;
		Ordonnenceur *struct_Ordonnenceur = malloc(sizeof(Ordonnenceur));
		struct_Ordonnenceur->proc = struct_Processus;
		struct_Ordonnenceur->next = NULL;
		if(est_vide_Ordonnenceur())
		{
			// on ajoute le processus en tête de file
			head = struct_Ordonnenceur; 
			tail = struct_Ordonnenceur;
		}
		else
		{
			// Si la priorité du processus est plus petit que celui de la tête de file
			// on l'ajoute en tête de file.
			if(struct_Processus.int_priorite < head->proc.int_priorite)
			{
				struct_Ordonnenceur->next = head;
				head = struct_Ordonnenceur;
			}
			// Si la priorité du processus est plus grand que celui de la queue de file
			// on l'ajoute en queue de file.
			else if(struct_Processus.int_priorite > tail->proc.int_priorite)
			{
				tail->next = struct_Ordonnenceur;
				tail = struct_Ordonnenceur;
			}
			else
			{
				// Sinon, on parcours la liste jusqu'à trouver un processus de priorité
				// plus grande que celui du processus à ajouter.
				// Avec ces vérifications, les processus seront donc toujours triés par priorité.
				// Mais aussi par ordre d'appel si deux processus ont la même priorité.
				while(struct_Ordonnenceur_tmp->next != NULL && 
				struct_Ordonnenceur_tmp->next->proc.int_priorite <= struct_Processus.int_priorite)
				{
					struct_Ordonnenceur_tmp = struct_Ordonnenceur_tmp->next;
				}
				struct_Ordonnenceur->next = struct_Ordonnenceur_tmp->next;
				struct_Ordonnenceur_tmp->next = struct_Ordonnenceur;
			}
		}
	}

	void defiler_Ordonnenceur(){
		if(est_vide_Ordonnenceur())
		{
			printf("La file est vide\n");
			exit(1);
		}
		// Comme l'ordonenceur est trié par priorité, on supprime toujours le premier élément.
		Ordonnenceur *struct_Ordonnenceur_tmp = head;
		if(head == tail)
		{
			head = NULL;
			tail = NULL;
		}
		else
		{
			head = head->next;
		}
		free(struct_Ordonnenceur_tmp);
	}

	void clear_Ordonnenceur(void){
		// tant que la file n'est pas vide, on supprime le premier élément.
		while(!est_vide_Ordonnenceur())
		{
			defiler_Ordonnenceur();
		}
	}