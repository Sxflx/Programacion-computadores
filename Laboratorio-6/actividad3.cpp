#include <stdio.h>
int clave= 20709370;

int main() {
  printf("Por favor ingrese su clave:\n");
  scanf("%d", &clave);
 if (clave==20709370){
   printf("Bienvenido:\n");
    } else  {
     printf("contraseña incorrecta, intente de nuevo:\n");
   printf("Por favor ingrese su clave:\n");
  scanf("%d", &clave);
  if (clave==20709370){
   printf("Bienvenido:\n");
    } else  {
     printf("contraseña incorrecta, intente de nuevo:\n");
     printf("Por favor ingrese su clave:\n");
  scanf("%d", &clave);

  if (clave==20709370){
   printf("Bienvenido:\n");
    } else  {
     printf("Usuario bloqueado:\n");
  } 
  
    return 0;
  } } }