#include <stdio.h>

/*
a) Defina la dimension de un vector
b) Que llene el vector
c) Despligue un menu de 4 opciones
  1. Imprimir el vector
  2. El doble de los componentes sin alterar el original
  3. Factorial de una componente
  4. Salir
*/

int dimension, opcion, opcionFactorial;

void llenaVector(int *vector)
{
  printf("\nIngresa los valores de las componentes del vector...\n");
  for (int i = 0; i < dimension; i++)
  {
    printf("Componente %d = ", i + 1);
    scanf("%d", &vector[i]);
    if (vector[i] < 0)
    {
      printf("\n!! El numero debe ser positivo !!\n\n");
      i--;
    }
  }
}

void imprimeVector(int *vector)
{
  printf("\n[ ");
  for (int i = 0; i < dimension; i++)
  {
    printf("%d ", vector[i]);
  }
  printf("]");
}

void dobleVector(int *vector)
{
  printf("\n[ ");
  for (int i = 0; i < dimension; i++)
  {
    printf("%d ", vector[i] * 2);
  }
  printf("]");
}

void factorialComponente(int *vector)
{
  int factorial = 1;
  do
  {
    printf("Elija la componente para calcular su factorial [1 - %d]: ", dimension);
    scanf("%d", &opcionFactorial);
  } while (opcionFactorial < 1 || opcionFactorial > dimension);

  opcionFactorial--;
  for (int i = 1; i <= vector[opcionFactorial]; i++)
  {
    factorial *= i;
  }
  printf("\nEl factorial de %d es %d", vector[opcionFactorial], factorial);
}

void imprimeMenu()
{
  int vector[dimension];

  llenaVector(vector);

  do
  {
    printf("\n\n** Menu Principal **\n");
    printf("\n1. Imprime el vector");
    printf("\n2. Imprime el doble de las componentes del vector");
    printf("\n3. Calcula el factorial de una componente");
    printf("\n4. Salir");
    printf("\n> ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
      imprimeVector(vector);
      break;
    case 2:
      dobleVector(vector);
      break;
    case 3:
      factorialComponente(vector);

      break;
    case 4:
      printf("\nHasta luego  👋  😇");
      break;
    default:
      printf("\nOpcion inválida 🤒  - Las opciones son del 1 al 4 ");
      break;
    }
  } while (opcion != 4);
}

int main()
{
  printf("\n*** B I E N V E N I D O ***\n");

  printf("\nIngresa la dimension del vector: ");
  scanf("%d", &dimension);

  imprimeMenu();

  printf("\n");

  return 0;
}