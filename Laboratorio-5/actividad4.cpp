#include <stdio.h>
float radio;
float perimetro;
float area;
float pi=3.14;

int main(){
     printf("Ingrese radio de la circunferencia\n");
    scanf("%d, &radio"); 
 perimetro= pi * pi * radio;
 area= pi * radio * radio;
    printf("El perimetro de la circunferencia es %d\n, perimetro");
     printf("El area de la circunferencia es %d\n, area");
     return 0;
}