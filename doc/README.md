
## Authors

- [@Hanabi-TheFox](https://www.github.com/Hanabi-TheFox)
-  [@RDNATOS](https://github.com/RDNATOS)


## Contexte

Ce Projet à été réalisé par Ethan Pinto et Renato Nascimento Ardiles

Il fut données par Madame ndeye arame DIAGO


## Consignes

Sujet 2 : Ordonnancement de processus 
L’ordonnancement consiste, pour le système d’exploitation, à optimiser l’utilisation du processeur 
en lui affectant tour à tour différentes tâches à exécuter (processus). Il peut y en avoir des centaines 
à  la  fois  sur  une  machine. L’ordonnanceur va répartir le temps de calcul entre les programmes, 
afin  que  tous  puissent  avancer  dans  leur  exécution  de  manière  satisfaisante,  la  plupart  des 
ordonnanceurs  modernes  utilisent  des  files  pour  garder  en  mémoire  de  façon  optimale  les 
programmes à exécuter. La file est parfaitement adaptée à l’ordonnancement : les programmes qui 
demandent du temps de calcul sont insérés en bout de file, et ceux qui seront défilés pour obtenir 
effectivement du temps processeur sont ceux qui attendent depuis le plus longtemps

Un processus est caractérisé par un nom, une durée d’exécution et une priorité. La priorité est un 
entier compris entre 0 et 5 par exemple. Un ordonnanceur est caractérisé par une file de processus.  
 
    (a) Créer les structures permettant de modéliser un processus et un ordonnanceur et écrire les programmes suivants :  
    (b) ajout_activite qui ajoute une activité passée en paramètre à la file de processus de l’ordonnanceur. 
    (c) step qui effectue un “tour” d’ordonnancement comme suit : si la file est vide, on le dit et on ne fait rien. S’il y a au moins une activité dans la file, on défile et on exécute l’activité en affichant son nom et sa durée et en attendant le temps correspondant à la durée de l’activité.  
    (d) run qui itère step jusqu’à obtenir une file de processus vide. 
    (e) Ecrire un programme principal.


## Contenu

Le projet contient les fichiers suivants :

**bin**

L'ensemble des fichiers .o du projet

    data.o
    file.o
    fonction.o
    main.o

**data**

Le fichier data nécessaire à l'execution du projet

    processus.csv

**doc**

Le readme du projet ainsi que le pdf contenant les consignes

    README.md
    TP NOTÉ algoprocING1.pdf

**src**

L'ensemble des fichiers .h et .c du projet

    data.c
    data.h
    file.c
    file.h
    fonction.c
    fonction.h
    main.c
    struct.h


**makefile**

permettant l'execution et la compilation du projet

**ordonnencementDeProcessus**

l'executable
## Executer le projet

tapper "make" dans le terminale pour compiler le projet

tapper "make run" pour éxecuter le projet

## Modification du code

Le code n'à pas besoin d'être modifié.
Pour changer la liste des processsus, vous avez juste à changer le contenue
du fichier "processsus.csv"

chaque ligne doit être écrit de la forme suivante :

"Nom_Du_Processus;Durée_Execution;Priorité"

**Nom_Du_Processus** est une chaine de max 50 caractères

**Durée_Execution** est un entier.

**Priorié** est un entier compris entre les valeurs *priorite_min* (défaut = 0)
et *priorite_max* (défaut = 5)
