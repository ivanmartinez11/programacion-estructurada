#include <stdio.h>

int main()
{
  int num1, num2, num3 = 0;

  printf("\nIngrese el primer número: ");
  scanf("%d", &num1);

  printf("\nIngrese el segundo número: ");
  scanf("%d", &num2);

  num3 = num1 + num2;

  printf("\nLa suma de %d + %d es igual a %d\n", num1, num2, num3);

  return 0;
}