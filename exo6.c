#include <stdio.h>
#include <math.h>


void cartesian2polar(float x, float y, float *radius, float *angle){

    *radius=sqrt((x*x)+(y*y));

    if(*radius==0){

        *angle=0;
    }
    else{
        *angle=atan2(y,x);
    }
}

void polar2cartesian(float radius, float angle, float *x, float *y){

    *x = radius*cos(angle);
    *y = radius*sin(angle);

}

void main(){

    int choix;
    float x,y,x2,y2,radius,angle;

    printf("Que souhaitez vous faire :");
    printf("\n1.carte2polar");
    printf("\n2.polar2carte\n");
    scanf("%d",&choix);

    if(choix==1){

        printf("\nVous avez choisi, carte2polar");
        printf("\nQue valent vos cordonnees x et y :");
        scanf("%f",&x);
        scanf("%f",&y);

        cartesian2polar(x,y,&radius,&angle);

        printf("Vos coordonees polaires sont les suivantes r=%f teta=%f",radius,angle);
    }

    else if(choix==2){

        printf("\nVous avez choisi, polar2carte");
        printf("\nQue valent vos cordonnees r et teta :");
        scanf("%f",&radius);
        scanf("%f",&angle);

        polar2cartesian(radius,angle,&x2,&y2);

        printf("Vos coordonees cartesiennes sont les suivantes (%f,%f)",x2,y2);
    }
}
