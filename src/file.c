//--------------------------------------------------
//---------- Propriété de Ethan et Renato ----------
//--------------------------------------------------

// Fichier dans lequel seront écrits toutes les fonctions déclarés par file.h
#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    Ordonnenceur *tmp = head;
    printf("Affichage de la file des processus :\n\n");
    while(tmp != NULL)
    {
        printf("Nom du processus : %s\n", tmp->proc.Nom);
        printf("Durée d'exécution du processus : %d\n", tmp->proc.duree_execution);
        printf("Priorité du processus : %d\n", tmp->proc.priorite);
        tmp = tmp->next;
        printf("\n");
    }
}

    void ajouter_Ordonnenceur(Processus p){
        if(p.priorite < priorite_min || p.priorite > priorite_max)
        {
            printf("La priorité du processus est incorrecte\n");
            exit(1);
        }
        Ordonnenceur *tmp = head;
        Ordonnenceur *new = malloc(sizeof(Ordonnenceur));
        new->proc = p;
        new->next = NULL;
        if(est_vide_Ordonnenceur())
        {
            // on ajoute le processus en tête de file
            head = new; 
            tail = new;
        }
        else
        {
            if(p.priorite < head->proc.priorite)
            {
                new->next = head;
                head = new;
            }
            else if(p.priorite > tail->proc.priorite)
            {
                tail->next = new;
                tail = new;
            }
            else
            {
                while(tmp->next != NULL && tmp->next->proc.priorite < p.priorite)
                {
                    tmp = tmp->next;
                }
                new->next = tmp->next;
                tmp->next = new;
            }
        }
    }

    void defiler_Ordonnenceur(){
        if(est_vide_Ordonnenceur())
        {
            printf("La file est vide\n");
            exit(1);
        }
        Ordonnenceur *tmp = head;
        if(head == tail)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            head = head->next;
        }
        free(tmp);
    }

    void clear_Ordonnenceur(void){
        while(!est_vide_Ordonnenceur())
        {
            defiler_Ordonnenceur();
        }
    }