#include <stdio.h> // Biblioteca estandar

int main() {
  // Variables para el numero y la suma de divisores
  int numero = 0, suma = 0;
  printf("Introduce un numero: ");
  scanf("%d", &numero);

  // Iteramos desde 1 hasta número-1 para hallar los divisores
  for (int i = 1; i < numero; i++) {
    /* Si el residuo entre el número del usuario y el divisor actual
    es 0, entonces vamos sumando */
    if (numero % i == 0) {
      // Suma de los divisores
      suma += i;
    }
  }
  /* Comparación del valor de la suma y del número del usuario */
  if (suma == numero) {
    // Se muestra si es perfecto
    printf("%d es un numero perfecto", numero);
  } else {
    // Se muestra si no es perfecto
    printf("%d no es un numero perfecto", numero);
  }
  return 0;
}