#include <stdio.h>

#define SIZE 50

int main(){ int posicion=0;

int vector_1[SIZE], vector_2[SIZE], suma_vectores[SIZE], dimension;

  printf("\nIngresa la dimensión de los vectores: ");
  scanf("%d", &dimension);

  if (dimension <= SIZE && dimension > 0)
  {
    printf("\nIngresa los componentes del vector 1...\n");
    do
    {
      printf("> ");
      scanf("%d", &vector_1[posicion]);
      posicion++;
    }while(posicion<dimension);

posicion=0;

    printf("\nIngresa los componentes del vector 2...\n");
    do
    {
      printf("> ");
      scanf("%d", &vector_2[posicion]);
      posicion++;
    }while(posicion<dimension);


posicion=0;
    do
    {
      suma_vectores[posicion] = vector_1[posicion] + vector_2[posicion];
      posicion++;
    }while(posicion<dimension);

posicion=0;
    printf("\nEl vector resultante es...\n");
    printf("[ ");
    do
    {
      printf("%d ", suma_vectores[posicion]);
      posicion++;
    }while(posicion<dimension);
    printf("]\n");
  }
  else
  {
    printf("\nVerifica la dimensión de los vectores... :c\n");
  }

  return 0;
}