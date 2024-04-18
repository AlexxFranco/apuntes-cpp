#include <stdio.h>
#include <stdlib.h>

int main () {
  int anio = 0, continuar;
  do {
    printf("\nIntroduzca un año: ");
    scanf("%d", &anio);
    if (((anio % 4 == 0)&&(anio % 100 != 0)) || (anio % 400 == 0)) {
      printf("ES BISIESTO\n");
    } else {
      printf("NO ES BISIESTO\n");
    }
    printf("\nDesea continuar?\nCualquier numero.-Si 0.-No: ");
    scanf("%d", &continuar);
    if (continuar) {
      continue;
    } else {
      break;
    }
  } while (continuar);
  return 0;
}