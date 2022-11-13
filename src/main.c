//--------------------------------------------------
//---------- Propriété de Ethan et Renato ----------
//--------------------------------------------------

// Fichier Main
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonction.h"

int main(){
	Processus p;
	strcpy(p.Nom, "Processus 1");
	p.duree_execution = 10;
	p.priorite = 1;
	ajout_activite(p);
	strcpy(p.Nom, "Processus 2");
	p.duree_execution = 3;
	p.priorite = 3;
	ajout_activite(p);
	strcpy(p.Nom, "Processus 3");
	p.duree_execution = 4;
	p.priorite = 0;
	ajout_activite(p);
	run();
	printf("Fin du programme\n");
	return 0;
}