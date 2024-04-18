#include <stdio.h>

int main() {
  int n, i, suma, potencia, exponente;
  printf("Introduce un numero: ");
  scanf("%d", &n);
  printf("Introduce un exponente: ");
  scanf("%d", &exponente);
  suma = n;
  for (i = n - 1; i >= 1; i--) {
    suma = suma * i;
  }
  potencia = n;
  for (int j = 1; j < exponente; j++) {
    potencia = potencia * n;
  }
  printf("El factorial es: %d", suma);
  printf("\nLa potencia %d de %d es: %d", exponente, n, potencia);
  return 0;
}