#include <stdio.h>
int main()
{
  int size, escalar, posicion=0;

  printf("\nIngrese la dimension del vector: ");
  scanf("%d", &size);


  int vector[size];

  
  do
  {
    printf("> ");
    scanf("%d", &vector[posicion]);
    posicion++;
  }while(posicion<size);

  printf("\nIngrese un valor escalar: ");
  scanf("%d", &escalar);

  posicion=0;
  printf("\nLa multiplication del escalar por el vector es: [ ");
  do
  {
    
    printf("%d ", escalar * vector[posicion]);
    posicion++;
  }while(posicion<size);
  printf("]\n");

  return 0;
}