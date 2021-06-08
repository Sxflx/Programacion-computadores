#include <stdio.h>

int num=0;
int res;

int main(){ 
while(num>=0){
printf("Ingrese un numero\n");
scanf("%d", &num);
res= res + num;
}
printf("El resultado tiene valor: %d\n", res);
	return 0;
}