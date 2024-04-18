#include <stdio.h>

int main() {
  int n, i, suma;
  printf("Introduce un numero: ");
  scanf("%d", &n);
  suma = n;
  for (i = n - 1; i >= 1; i--) {
    suma = suma * i;
  }
  printf("El factorial es: %d", suma);
  return 0;
}