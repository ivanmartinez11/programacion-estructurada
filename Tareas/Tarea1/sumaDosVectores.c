#include <stdio.h>

#define SIZE 50

int main()
{

  int vector_1[SIZE], vector_2[SIZE], suma_vectores[SIZE], dimension;

  printf("\nIngresa la dimensión de los vectores: ");
  scanf("%d", &dimension);

  if (dimension <= SIZE && dimension > 0)
  {
    printf("\nIngresa los componentes del vector 1...\n");
    for (int posicion = 0; posicion < dimension; posicion++)
    {
      printf("> ");
      scanf("%d", &vector_1[posicion]);
    }

    printf("\nIngresa los componentes del vector 2...\n");
    for (int posicion = 0; posicion < dimension; posicion++)
    {
      printf("> ");
      scanf("%d", &vector_2[posicion]);
    }

    for (int posicion = 0; posicion < dimension; posicion++)
    {
      suma_vectores[posicion] = vector_1[posicion] + vector_2[posicion];
    }

    printf("\nEl vector resultante es...\n");
    printf("[ ");
    for (int posicion = 0; posicion < dimension; posicion++)
    {
      printf("%d ", suma_vectores[posicion]);
    }
    printf("]\n");
  }
  else
  {
    printf("\nVerifica la dimensión de los vectores... :c\n");
  }

  return 0;
}