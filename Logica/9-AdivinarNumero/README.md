## 9.-ADIVINAR EL NÚMERO
> #### Clase: 24/04/24

Tenemos un juego que consiste en que el usuario o el jugador adivine el número aleatorio generado por el programa en un máximo de 9 intentos.

- El programa genera un número aleatorio en un rango del 1 al 100.
- El jugador tiene hasta 9 intentos para adivinar el número.
- Después de cada intento, el programa indica al jugador si el número ingresado es mayor o menor que el número aleatorio generado.
- Si el jugador adivina el número, el programa muestra un mensaje de felicitaciones y termina.
- Si el jugador no adivina el número en 9 intentos, el programa revela el número aleatorio y termina.

#### Estructurando los primeros elementos del código.
Incluimos las bibliotecas que se van a utilizar, las cuales serán stdio, cstdlib y ctime.
```C++
#include <stdio.h> // Standard Input/Output Library
#include <cstdlib> // C Standard Library para el uso de srand() y rand()
#include <ctime> // C  Time Library para el uso de time()
```

#### Estructurando el main.
Declaramos dos variables de tipo int, una para almacenar el valor aleatorio generado y otra para el valor introducido por el usuario.

```C++
int main() {
    // Declarar variables
    int numero_aleatorio, numero_usuario;
    return 0;
}
```

Para generar el numero aleatorio utilzamos la función srand() y rand(), ambas vienen incluidas en la biblioteca cstdlib (C Standard Library).
Se llama a srand() con una semilla, generalmente basada en el tiempo actual, para inicializar el generador de números rand(). Para inicializarla con el tiempo actual debemos utilizar la funcion time() incluida en la biblioteca time, y debemos pasar como argumento 0, NULL o nullptr.

```C++
int main() {
    // Declarar variables
    int numero_aleatorio, numero_usuario;
    // Inicializar la semilla de rand() con base en la hora actual
    srand(time(0));
    return 0;
}
```

Pasamos a rand() para generar números aleatorios en el programa. Cada vez que se llama a rand(), se devuelve un nuevo número aleatorio en la secuencia.

```C++
int main() {
    // Declarar variables
    int numero_aleatorio, numero_usuario;
    // Inicializar la semilla de rand() con base en la hora actual
    srand(time(0));
    // Generar un número aleatorio entre 1 y 100
    numero_aleatorio = rand() % 100 + 1;
    return 0;
}
```

El numero aleatorio va a ser inicializado por rand(), pero por defecto este genera un número grande, para delimitar esto a un rango determinado, lo que hacemos es utilizar el operador de modulo (%), este nos va a devolver el residuo de la division entera entre el número que queramos, para nuestro caso lo haremos entre 100, puesto que dependiendo el número nos puede arrojar residuos de 0 (si es un número exactamente divisible por 100) hasta 99, y le sumamos 1 para que se mueva al rango de 1 a 100.

Realizamos una estructura for que va a ser iterada 9 veces pues es el total de intentos que tenemos, y va a ir incrementando de 1 en 1. Dentro de este for vamos a ir preguntando el número al usuario y almacenamos este número.

```C++
int main() {
    ...
    for (int i = 1; i <= 9; i++) 
    {
        // Pedir al usuario que ingrese su numero
        printf("Ingresa un numero: ");
        scanf("%d", &numero_usuario);
    }
}
```

Realizamos 3 estructuras if-else para comparar y determinar si el número introducido por el usuario es mayor, menor o igual al número generado aleatoriamente y dependiendo de la condición que se cumpla, el programa nos muestra el mensaje de si el número que estamos intentando adivinar es mayor o menor, en ambos casos continua el ciclo, pero si acertamos con el número, entonces finalizamos mostrando el mensaje de "Has adivinado el numero" y rompiendo el ciclo con la clausula o palabra reservada break.

```C++
int main() {
    ...
     for (int i = 1; i <= 9; i++) 
    {
        // Pedir al usuario que ingrese su numero
        printf("Ingresa un numero: ");
        scanf("%d", &numero_usuario);

        // Verificar si el intento es correcto
        if (numero_usuario > numero_aleatorio) 
        {
            printf("El número es menor.");
        } 
        else if (numero_usuario < numero_aleatorio)
        {
            printf("El número es mayor.");
        }
        else if (numero_usuario == numero_aleatorio) 
        {
            printf("Has adivinado el numero");
            break;
        } 
    }
}
```

Añadimos una clausula if al final que nos muestra que los intentos acabaron si es que llegamos a la ultima iteración sin adivinar el número.

```C++
int main() {
    ...
     for (int i = 1; i <= 9; i++) 
    {
        ...
        // Si no adivina el número, revelar los intentos
        if (i == 9) 
        {
            printf("Se te han acabado los intentos. El número era: ");
        }
    }
}
```

Finaliza el programa con return 0. Si adivinamos, se rompe el ciclo for sin continuar con las siguientes iteraciones y pasa a leer esta última línea de código, si no adivinamos se lee todo el código tal cual esta en la secuencia y se finaliza.

```C++
int main() {
    ...
    for (int i = 1; i <= 9; i++) 
    {
        ...
    }
    return 0;
}
```

> [!NOTE]
> Los puntos suspensivos (...) hacen referencia a las partes de código escritas anteriormente pero es para efecto practico de que este archivo no sea tan largo y repetitivo de leer, el código completo abajo.

### [Código del ejercicio](adivinarNumero.cpp) 

## Contribuciones
Las contribuciones son bienvenidas. Si encuentras errores o formas de mejorar el código, no dudes en querer contribuir.