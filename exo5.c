#include <stdio.h>
#include <stdlib.h>

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


void main()
{

float valeura,valeurb;
float solution;
int res;

printf("donner les valeurs\n");
scanf("%f",&valeura);
scanf("%f",&valeurb);
res=resoudre1(valeura,valeurb,&solution);


if(res==-1){
     printf("Tout x est solution");
}

if(res==0){
     printf("Pas de solutions");
}

if(res==1){
     printf("la solution est %.2f ", solution);
}

}
