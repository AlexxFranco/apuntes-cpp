## 7.-FUNCIONES
> #### Clase: 17/04/24

Una función es un bloque de código que realiza una tarea específica y devuelve un valor como resultado.
Las funciones pueden aceptar parámetros, que son valores que se pasan a la función para que los utilice en su ejecución.
La implementación del [código del ejercicio anterior](/Ejercicios-C++/MENU/6-FACTORIAL%20Y%20POTENCIA/src/factorialPotencia.cpp), en funciones es la siguiente:

#### Estructurando los primeros elementos del código
Utilizamos la biblioteca stdio.h de C++

```C++
#include <stdio.h> // Biblioteca estándar entrada/salida de C++
```

#### Implementación de las funciones
Para el factorial, declaramos una nueva funcion que me va retornar un valor de tipo **int** que va a ser el resultado o el valor del factorial del número que vamos a introducir, va requerir un parámetro de tipo **int**, el cual va a ser el número introducido y el nombre de la función va a ser `factorial`.

```C++
int factorial(int numero) {
  int suma, i;
  suma = numero;
  for(i = numero - 1; i >= 1; i--) {
    suma = suma * i;
  }
  return suma;
}
```

Dentro de la función simplemente movemos el bloque de código que teniamos anteriormente para ejecutar el calculo del factorial.

Para la potencia va a ser similar solo que necesitamos dos parámetros, el número introducido por el usuario y el valor del exponente al que se quiere elevar dicho número, por lo tanto se requiere de dos parámetros de tipo **int**, se va retornar el resultado de tipo **int** y la función se va nombrar como potencia

```C++
int potencia(int numero, int exponente) {
  int resultado, j;
  resultado = numero;
  for(j = 1; j < exponente; j++) {
    resultado = resultado * numero;
  }
  return resultado;
}
```

#### Estructura dentro del main.
La estructura dentro del main va a quedar practicamente igual con la diferencia que se van a declarar dos variables para almacenar los resulados de las operaciones y despues se van a utilizar para mostrarse por la terminal

```C++
int main() {
  int n, exponente, resultado_factorial, resultado_potencia;
  printf("Introduce un numero: ");
  scanf("%d", &n);
  printf("Introduce un exponente: ");
  scanf("%d", &exponente);
  resultado_factorial = factorial(n);
  printf("El factorial es: %d", resultado_factorial);
  resultado_potencia = potencia(n, exponente);
  printf("\nLa potencia %d de %d es: %d", exponente, n, resultado_potencia);
  return 0;
}
```


### [Código del ejercicio](funciones.cpp)


## Contribuciones
Las contribuciones son bienvenidas. Si encuentras errores o formas de mejorar el código, no dudes en querer contribuir.