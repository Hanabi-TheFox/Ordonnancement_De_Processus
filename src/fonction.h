//--------------------------------------------------
//---------- Propriété de Ethan et Renato ----------
//--------------------------------------------------

// Fichier dans lequel seront définis toutes les fonctions utilisés par main.c
// Ayant été décris dans le PDF.
#include "struct.h"
#include "file.h"

// ajoute un processus dans la file de l'ordonnanceur.
void ajout_activite(Processus struct_Processus);
// execute un processsus de la file de l'ordonnanceur et le retire.
int step(void);
// itère step jusqu’à obtenir une file de processus vide.
void run(void);