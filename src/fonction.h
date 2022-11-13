//--------------------------------------------------
//---------- Propriété de Ethan et Renato ----------
//--------------------------------------------------

// Fichier dans lequel seront définis toutes les fonctions utilisés par main.c

#include "struct.h"

// ajoute un processus dans la file de l'ordonnanceur
void ajout_activite(Ordonnenceur *file, Processus processus);
// supprime un processsus de la file de l'ordonnanceur
void supprimer_activite(Ordonnenceur *file, Processus processus);
// effectue un "tour" de l'ordonnanceur
int step(Ordonnenceur *file);
// itère step jusqu’à obtenir une file de processus vide.
void run(Ordonnenceur *file);