#include<stdlib.h>
#include<stdio.h>
#include "fonction.h"

Pile initialise(void)
{
    return NULL;
}

int pile_vide(Pile st)
{
    if(st == NULL)
        return 1;
    return 0;    
}



Pile Empiler(Pile st,int x)
{
    PileElement *element=malloc(sizeof(*element));
    if(element==NULL){
       fprintf(stderr,"probleme d'allocation dynamique.\n");
       exit(EXIT_FAILURE);
    } 
    element->value=x;
    element->next=st;

    return element;
}

Pile depiler(Pile st)
{
    PileElement *element;
    if(pile_vide(st))
        return NULL;
    element=st->next;
    free(st);

    return element;   
}

Pile vider_pile(Pile st)
{
    PileElement *element;
    if(pile_vide(element))
        return initialise();

    element=st->next;
    free(st);

    return vider_pile(element);
    
}

void Afficher(Pile st)
{
    if(pile_vide(st)){ 
        printf("la pile est vide!:rien a afficher\n");
        return ;   
    }
    while(!pile_vide(st))
    {
        printf("[%d]\n",st->value);
        st=st->next;
    }     
}

int sommet(Pile st)
{
    if(pile_vide(st)){ 
        printf("aucun sommet la pile est vide\n");
        return -1;
    }
    return st->value;    

}

int pile_length(Pile st)
{
    int cpt=0;
    while(!pile_vide(st))
    {
        cpt++;
        st=st->next;
    }
    return cpt ;
}
 


