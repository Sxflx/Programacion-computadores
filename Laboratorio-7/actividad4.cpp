#include <stdio.h>

int numero;
int div=0;
int valor;

int main(){ 
    printf("Introduzca un numero para buscar los numeros primos entre 1 y ese numero:\n");
    scanf("%d",&numero);

  for(int j = 1; j < numero; j++){
    valor=j;
    for(int i = 1; i <= valor; i++){
        if(valor%i==0){ 
        div=div+1;
        }
      }
        if(div==2){
      printf("%d\n", valor);}
      div=0;
    }
	return 0;
}