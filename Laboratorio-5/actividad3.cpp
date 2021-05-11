#include <stdio.h>

float numero1;
float numero2;
float multiplicacion;

int main(){
    printf("Ingrese un decimal:\n");
    scanf("%f", &numero1);
    printf("Ingrese un decimal:\n");
    scanf("%f", &numero2);
    multiplicacion = numero1 * numero2;
    printf("el resultado de la multiplicacion es %f:\n", multiplicacion);
    return 0;
}