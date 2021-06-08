#include <stdio.h>

int valor = 0;
int pts = 0;
int cod = 0;
int confirmar = 0;


int main() {
  
  printf("ingrese el valor del producto:\n");
  scanf("%d", &valor);
  
  printf("ingrese los puntos del cliente:\n");
  scanf("%d", &pts);

  printf("ingrese el codigo del producto:\n");
  scanf("%d", &cod);

  if((pts*10)>=valor){
    printf("¿Desea pagar con puntos? si(1) no(0):\n");
  scanf("%d", &confirmar);
  if(confirmar == 1){
    pts= pts-(valor/10);
    printf("En este momento acumula %d puntos:\n", pts);

  }
  else{
    printf("son $%d:\n", valor);
    if(cod>=100 && cod<200){
      if(valor<10000){
        pts= pts+(valor/100);
        printf("En este momento acumula %d puntos:\n", pts);
       }
      else{
        pts= pts+(valor/50);
        printf("En este momento acumula %d puntos:\n", pts);
      }
    }
    else if (cod>=200 && cod<300){
      if(valor<10000){
        pts= pts+(valor/50);
        printf("En este momento acumula %d puntos:\n", pts);
       }
      else{
        pts= pts+(valor/30);
        printf("En este momento acumula %d puntos:\n", pts);
      }
    }
  }

  }
    else{
    printf("son $%d\n", valor);
    if(cod>=100 && cod<200){
      if(valor<10000){
        pts= pts+(valor/100);
        printf("En este momento acumula %d puntos:\n", pts);
      }
      else{
        pts= pts+(valor/50);
        printf("En este momento acumula %d puntos:\n", pts);
      }
    }
    else if (cod>=200 && cod<300){
      if(valor<10000){
        pts= pts+(valor/50);
        printf("En este momento acumula %d puntos:\n", pts);
      }
      else{
        pts= pts+(valor/30);
        printf("En este momento acumula %d puntos:\n", pts);
      }
    }
  }
 return 0;
}