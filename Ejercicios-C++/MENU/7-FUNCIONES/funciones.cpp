#include <stdio.h>

int factorial(int numero) {
  int suma, i;
  suma = numero;
  for(i = numero - 1; i >= 1; i--) {
    suma = suma * i;
  }
  return suma;
}

int potencia(int numero, int exponente) {
  int resultado, j;
  resultado = numero;
  for(j = 1; j < exponente; j++) {
    resultado = resultado * numero;
  }
  return resultado;
}


int main() {
  int n, exponente, resultado_factorial, resultado_potencia;
  printf("Introduce un numero: ");
  scanf("%d", &n);
  printf("Introduce un exponente: ");
  scanf("%d", &exponente);
  resultado_factorial = factorial(n);
  printf("El factorial es: %d", resultado_factorial);
  resultado_potencia = factorial(n);
  printf("\nLa potencia %d de %d es: %d", exponente, n, resultado_potencia);
  return 0;
}