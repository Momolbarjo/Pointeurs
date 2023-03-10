#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100


int getExtremums(int *tab,int N,int** min,int** max){
    if (tab == NULL || N ==0){
        return 1;
    }

    int i;
    *min=&tab[0];
    *max=&tab[0];

     for (i = 1; i < N; i++) {
        if (tab[i] < **min) {
            *min = &tab[i];
        }
        if (tab[i] > **max) {
            *max = &tab[i];
        }
    }

    return 0;
}


void main() {

    srand(time(NULL));
    int N=10;
    int *min;
    int *max;
    int tab[N];


    for(int i=0;i<N;i++){

        tab[i]=rand()%MAX;
        printf("%d , %p\n",tab[i],&tab[i]);

    }

    int result=getExtremums(tab,N,&min,&max);

    if(result==0){

        printf("Le minimum est %d et est a l'adresse %p\n",*min,min);
        printf("Le maximum est %d et est a l'adresse %p",*max,max);

    }


    else{

        printf("Erreur dans la matrice , il y a quelque chose qui ne vas pas");
    }

}
