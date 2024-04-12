#include <iostream> // Biblioteca estandar

// Espacio de nombres para utilizar cout y cin
using namespace std;

int main() {
  // Variables para el numero y la suma de divisores
  int numero = 0, suma = 0;
  // Manejo de entradas válidas
  while(numero <= 0) {
    cout << "Introduce un numero valido: ";
    // Lectura del número del usuario
    cin >> numero;
    // Limpieza del búfer
    cin.ignore();
  }
  /* Bucle para iterar los numeros desde el 1 hasta
    la mitad del número del usuario para hallar los
    posibles divisores
  */
  for (int divisor = 1; divisor <= numero / 2; divisor++) {
    /* Si el residuo entre el número del usuario y el divisor actual
    es 0, entonces vamos sumando */
    if (numero % divisor == 0) {
      // Suma de los divisores
      suma += divisor;
    }
  }
  /* Comparación del valor de la suma y del número del usuario */
  if (suma == numero) {
    // Se muestra si es perfecto
    cout << numero << " es perfecto";
  } else {
    // Se muestra si no es perfecto
    cout << numero << " no es perfecto";
  }
  return 0;
}