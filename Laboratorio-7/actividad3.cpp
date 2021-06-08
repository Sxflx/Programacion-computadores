#include <stdio.h>

int numero;

int main(){ 
    printf("Por favor, introduzca un numero para calcular sus divisores:\n");
    scanf("%d",&numero);

    for(int i = 1; i <= numero; i++)
        if(numero%i==0){
        printf("%d es divisor de %d.\n", i, numero);
        }
	return 0;
}