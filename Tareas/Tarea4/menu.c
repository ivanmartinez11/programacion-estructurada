#include <stdio.h>

int main()
{
  printf("\n********************************");
  printf("\n*          Tarea 4             *");
  printf("\n* Martinez Baeza Ivan Emmanuel *");
  printf("\n* Matricula 2203030524         *");
  printf("\n********************************\n");
  int opcion;
  do
  {
    printf("\nElija una opcion:\n");
    printf("\n1. Nombre del alumno");
    printf("\n2. Matricula del alumno");
    printf("\n3. Grupo del alumno");
    printf("\n4. Salir");
    printf("\n> ");
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1:
      printf("\nMartinez Baeza Ivan Emmanuel\n");
      break;
    case 2:
      printf("\n2203030524\n");
      break;
    case 3:
      printf("\nCTG-85\n");
      break;
    case 4:
      printf("\nHasta pronto!\n");
    default:
      break;
    }
  } while (opcion != 4);

  return 0;
}
