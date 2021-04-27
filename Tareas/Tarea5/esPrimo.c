#include <stdio.h>
int main()
{
  printf("\n********************************");
  printf("\n*          Tarea 5             *");
  printf("\n* Martinez Baeza Ivan Emmanuel *");
  printf("\n* Matricula #########          *"); //! PON TU MATRICULA
  printf("\n********************************\n");

  int numero = 0, divisiones = 1;
  printf("\nIngresa un numero: ");
  scanf("%d", &numero);

  for (int i = 2; i <= numero; i++)
  {
    if (numero % i == 0)
    {
      divisiones++;
    }
  }

  if (divisiones == 2)
  {
    printf("El numero %d es primo\n", numero);
  }
  else
  {
    printf("El numero %d no es primo\n", numero);
  }

  return 0;
}