#include <stdio.h> 

int numero;
int division;

int main (){
 
  printf("Ingrese un numero:\n");
    scanf("%d", &numero);
    division= numero%2;

    if(division==0){

    printf("el numero es par:\n");
      } else {
        printf("el numero es impar:\n");
      }
    return 0;
}