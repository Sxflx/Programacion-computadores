#include <stdio.h> 

int main (){
    int num1, num2, num3;
    printf("Ingrese el primer numero:\n");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero:\n");
    scanf("%d",&num2);
    printf("Ingrese el tercer numero:\n");
    scanf("%d",&num3);

    if((num1 > num2) && (num1 > num3)) {

       printf("el primer numero es mayor:\n");
        } else if ((num2 > num3) && (num2> num1)) {
            printf("el segundo numero es mayor:\n");
            } else if ((num3 > num1) && (num3 > num2)) {
            printf ("el tercer numero es mayor:\n");
            } else if ((num1 == num2) && (num1 > num3)){
              printf ("el primer y segundo numero son iguales y mayores al tercero:\n");
            } else if ((num2 == num3) && (num2 > num1)){
              printf ("el segundo y tercer numero son iguales y mayores al primero:\n");
            } else if ((num1 == num3) && (num1 > num2)){
              printf ("el primer y tercer numero son iguales y mayores al segundo:\n");
            } else {
                printf ("los tres numeros son iguales");
            }
    return 0;
}   