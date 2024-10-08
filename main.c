#include <stdio.h>
#include<math.h>
#define PIGRECO 3.14159265
int main() {
    int i;
    for(i=1;i<=20;i++) {
        printf("CIRCONFERENZA ED AREA CON RAGGIO: %d :\n\tcirconferenza : %f\n\tarea%f\n",i,2*PIGRECO*i,PIGRECO*(int)pow(i,2));
    }
}  //Il printf non sono riuscito a farlo, ho dovuto guardare il libretto. Non mi veniva neanche con il while e quindi
// guardando le slide del comando for l'ho fatto con quello.