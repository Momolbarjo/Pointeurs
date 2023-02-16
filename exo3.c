#include <stdio.h>

typedef struct{


    int heures;
    int minutes;
    int secondes;

}Temps;

void ajouteSeconde(Temps* temps, int nbSecondes,int nbHeures){

    temps->secondes+=nbSecondes;

    if(temps->secondes >= 60){

        temps->minutes += temps->secondes/60;
        temps->secondes = temps->secondes%60;
    }

    if(temps->minutes >= 60){

        temps->heures += temps->minutes/60;
        temps->minutes = temps->minutes%60;

    }

    temps->heures = (temps->heures+nbHeures) % 24;
}

void main (){

    int heures,secondes;
    Temps temps={12,15,00};

    printf("Combien d'heures et de secondes souhaitez vous ajouter :\n");
    scanf("%d",&heures);
    scanf("%d",&secondes);

    ajouteSeconde(&temps,secondes,heures);
    printf("Nouveau temps : %.2d:%.2d:%.2d", temps.heures, temps.minutes, temps.secondes);
}

/*Si c'est possible mais il faut acceder au temps via une structure que l'on doit retourner 
au programme principal, ici, avec les pointeurs nous sommes en mesures de modifier l'heure 
en passant directement par l'adresse, nous avons donc pas besoin de retourner de valeur*/
