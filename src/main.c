//--------------------------------------------------
//---------- Propriété de Ethan et Renato ----------
//--------------------------------------------------

// Fichier Main
#include "fonction.h"
#include "data.h"

int main(){
	// On lit le fichier data/processus.csv
	lecture_data();
	// On lance l'ordonnanceur
	run();
	printf("Fin du programme\n");
	return 0;
}