#include <stdio.h>

int num1;
int num2;
int res;

int main(){
  printf("Ingrese los numeros en forma X, Y:\n");
  scanf("%d, %d", &num1, &num2);
  for(int i = 0; i < num1; i++ ){
    res += num2;
  }
  printf("%d * %d = %d\n",num1, num2, res);

  return 0;
}