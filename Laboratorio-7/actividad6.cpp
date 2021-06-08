#include <stdio.h>

int num1=0;
int num2=1;
int res;
int numero;

int main(){ 
  printf("Ingrese un numero:\n");
  scanf("%d", &numero);
  printf("%d\n", num1);
  printf("%d\n", num2);
  for(int i = 0; i < numero; i++){
    res = num1 + num2;
    num1 = num2;
    num2 = res;

    printf("%d\n", res);
  }

  return 0;
}