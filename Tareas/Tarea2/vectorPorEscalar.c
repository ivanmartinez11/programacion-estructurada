#include <stdio.h>

int main()
{
  int size, escalar;

  printf("\nIngrese la dimension del vector: ");
  scanf("%d", &size);

  //! El vector se inicializa despues de leer la dimension
  //! porque es necesario conocer el tamaño para declararlo
  int vector[size];

  //? Este ciclo llena el vector
  for (int posicion = 0; posicion < size; posicion++)
  {
    printf("> ");
    scanf("%d", &vector[posicion]);
  }

  printf("\nIngrese un valor escalar: ");
  scanf("%d", &escalar);

  //? Este ciclo imprime la multiplication del escalar por el vector
  printf("\nLa multiplication del escalar por el vector es: [ ");
  for (int i = 0; i < size; i++)
  {
    //! AQUI HAY DOS MANERAS DE HACERLO

    //* 1. Haciendo la operacion aparte y despues imprimirla
    // int resultado = escalar * vector[i];
    // printf("%d ", resultado);

    //----------------------------------------------------------------

    //* 2. Haciendo la operacion dentro del printf
    //! (YO PREFIERO ESTA FORMA)
    printf("%d ", escalar * vector[i]);
  }
  printf("]\n");

  return 0;
}