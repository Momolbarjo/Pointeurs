#include <stdio.h>
#include <time.h>
#define SIZE 20


void main () {

    int tab[SIZE];
    int valeur;
    int somme=0;
    int *ptab=&tab;
    srand(time(NULL));

    for(int i=0;i<SIZE;i++){

        valeur=rand()%11;
        *(ptab + i)=valeur;
       

        somme +=*(ptab + i);
    
    }

   

    for(int i=0;i<SIZE;i++){

        printf("%d\n",*(ptab + i));
    }

    printf("\nSomme : %d\n",somme);
}
