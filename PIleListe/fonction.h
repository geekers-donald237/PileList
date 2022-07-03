#ifndef FONCTION_H
#define FONCTION_H

typedef struct PileElement
{
    int value;
    struct PileElement *next;
}PileElement,*Pile; 

Pile initialise();

int pile_vide(Pile st);


Pile Empiler(Pile st,int x);


Pile depiler(Pile st);


Pile vider_pile(Pile st);

void Afficher(Pile st);


int sommet(Pile st);


int pile_length(Pile st);

#endif  