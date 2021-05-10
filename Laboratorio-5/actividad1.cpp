#include <stdio.h>

int numero1;
int numero2;
int suma;

int main(){
    printf("ingrese el primer numero:\n");
    scanf("%d", &numero1);
    printf("ingrese el segundo numero:\n");
    scanf("%d", &numero2);
    suma = numero1 + numero2;
    printf("el resultado de la suma es %d\n", suma);
    return 0;
}