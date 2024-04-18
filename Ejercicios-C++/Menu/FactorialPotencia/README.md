# #6 FACTORIAL Y POTENCIA
> #### Clase: 17/04/24

El programa en C++ visto en clase calcula el factorial de un número entero introducido por el usuario y posteriormente la potencia de dicho número introduciendo un exponente.


##### Estructurando los primeros elementos del código
Para el código propuesto por el profesor, se utiliza la biblioteca stdio.h de C++ y definimos una nueva estructura o función main.

```C++
#include <stdio.h> // Biblioteca estándar entrada/salida de C++
int main() {
  // Código
  return 0;
}
```

##### Estructura dentro del main.
Declaramos una variable **n** que sera nuestro número a calcular su factorial, una variable **i** que sera nuestro contador dentro de la estructura for y una variable **suma** que va acumular la suma de las multiplicaciones, los tres de tipo entero **_(int)_**.

```C++
int n, i, suma;
```

Para el número al que vamos a calcular el factorial, imprimimos por consola el mensaje `Introduce un numero: ` mediante la función printf, y posteriormente pedimos el numero con la funcion scanf con `"%d"` como parámetro y lo almacenamos en **n**

```C++
printf("Introduce un numero: ");
scanf("%d", &n); 
/* Para almacenar un valor con scanf se hace referencia
   a la variable donde se va almacenar con &(ampersand)
   seguido del nombre de la variable &nombre_variable
*/
```

Inicializamos la variable **suma** con el valor del número (**n**) introducido por el usuario al inicio del programa para comenzar el cálculo del factorial con ese número como punto de partida.

```C++
suma = n;
```

Dentro del bucle for, suma contiene el valor del número introducido por el usuario, que es el número cuyo factorial estamos calculando. Luego, durante el bucle, multiplicamos suma por todos los números enteros positivos menores que él y los vamos guardando dentro de la misma variable suma (**_suma = suma * i_**). Esto con el iterador **i** que va a empezar desde _n - 1_, mientras sea mayor o igual 1 (**_i >= 1_**), y va ir decendiendo de 1 en 1 (**_i--_**).

```C++
for (i = n - 1; i >= 1; i--) {
  suma = suma * i;
}
```

una vez finalizado el bucle for, la variable suma ya contendrá el valor del factorial de dicho número, por lo tanto solo debemos mostrarlo en pantalla con la funcion printf.

```C++
printf("El factorial es: %d", suma);
```

### [Código del ejercicio](factorialPotencia.cpp)


## Contribuciones
Las contribuciones son bienvenidas. Si encuentras errores o formas de mejorar el código, no dudes en abrir un problema o enviar una solicitud de extracción.