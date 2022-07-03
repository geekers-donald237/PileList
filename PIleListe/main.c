#include"fonction.h"
#include<stdio.h>
#include<stdlib.h>

int main()
{


    Pile P = initialise();
    int x,n,i,p;
    int choix;
    int contin;

    do{

    printf("\n\t\t\t-->Implémentation d'une pile avec des listes chaines\n");
    printf("Pour toutes operations veuillez d'abord effectue une empilation\n");
    printf("\n1--> Empiler \n2--> Dépiler \n3--> Afficher le sommet de la pile \n4--> Verifier si une pile est vide \n5--> Vider la pile");
    printf("\nVotre choix: ");
    scanf("%d", &choix);
    if(choix == 1){
        printf("entrer le nombre d'elements a empiler\n");
        scanf("%d",&n);
        for(i = 1;i<=n ;i++){
            printf("\nEnter L'élément à empiler: \n");
            scanf("%d", &x);
            P=Empiler(P,x);
            printf("la nouvelle pile est : \n");
            Afficher(P);
            printf("\n");
        }
    }else if (choix == 2){
        printf("entrer le nombre d'elements a depiler\n");
        scanf("%d",&n);
        for(i = 1;i<=n ;i++){
            P=depiler(P);
            printf("Apres depilation: \n");
            Afficher(P);
            printf("\n");
        }    
    }else if(choix == 3){
        x=sommet(P);
        printf("le sommet de la pile est : %d\n",x);
    }else if(choix == 4){
        if(pile_vide(P) == 1){
            printf("La pile est Vide rien a faire\n");
        }else{
            printf("votre pile n'est pas vide \n");
        }
    }else if(choix == 5){
        P=vider_pile(P);
        Afficher(P);    
    }else {
        printf("CHOIX NON DISPONIBLE\n");
    }
    printf("\t\t\t--> Voulez vous continuer la partie ?\n--> Tapez 0(Non) ou 1(Oui)\n ");
    scanf("%d",&contin);
    }while(contin);


    
    return 0;
}