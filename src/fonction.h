//--------------------------------------------------
//---------- Propriété de Ethan et Renato ----------
//--------------------------------------------------

// Fichier dans lequel seront définis toutes les fonctions utilisés par main.c

#include "struct.h"
#include "file.h"

// ajoute un processus dans la file de l'ordonnanceur
void ajout_activite(Processus processus);
// supprime un processsus de la file de l'ordonnanceur
int step(void);
// itère step jusqu’à obtenir une file de processus vide.
void run(void);