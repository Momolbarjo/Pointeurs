#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int resoudre1(float a,float b,float *res)
{
    if((a==0)&&(b==0)){
        return -1;
    }

    else{

        if(a==0){
            return 0;
        }

        else {
            *res=-b/a;
            return 1;
        }

    }
}


int resoudre2(float c,float d,float e,float *res1,float *res2)
{
    float delta=(d*d)-4*c*e;

    if(delta<0){


        return -1;
    }

    else if (delta==0){


             *res1= (float)-d/((float)2*c);
            return 0;
        }

        else {


            *res1=(float)(-d-sqrt(delta))/((float)(2*c));
            *res2=(float)(-d+sqrt(delta))/((float)(2*c));
            return 1;
        }

    }



void main()
{

    float valeura,valeurb,valeurc,valeurd,valeure;
    float solution1,solution2,solution3;
    int res,res2;

    printf("donner les valeurs\n");
    scanf("%f",&valeura);
    scanf("%f",&valeurb);
    res=resoudre1(valeura,valeurb,&solution1);


    if(res==-1){
         printf("Tout x est solution");
    }

    if(res==0){
         printf("Pas de solutions");
    }


    if(res==1){
         printf("la solution est %.2f ", solution1);
    }

    printf("\ndonner les valeurs de l'equation du 2nd degres\n");
    scanf("%f",&valeurc);
    scanf("%f",&valeurd);
    scanf("%f",&valeure);
    res2=resoudre2(valeurc,valeurd,valeure,&solution2,&solution3);

    if(res2==-1){
         printf("Pas de solutions");
    }
    else if(res2==0){
         printf("La solution est %.2f",solution2);
    }
    else {
         printf("les solutions sont %.2f et %.2f ", solution2,solution3);
    }

    }


