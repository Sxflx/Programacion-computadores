#include <stdio.h>
 int variable1;
 char variable2;

 int main(){
     printf("Por favor, ingrese una variable\n");
     scanf("%c", &variable2);
     variable1 = variable2;
     printf("su codigo ASCII es %i", variable2);
return 0;
 }