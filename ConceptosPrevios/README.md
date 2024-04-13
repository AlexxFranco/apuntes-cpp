# Conceptos previos y fundamentales

En esta sección, cubriremos los conceptos básicos que son esenciales para comprender los ejercicios de lógica de programación en este repositorio. Si eres nuevo en la programación o necesitas repasar algunos fundamentos, esto es ideal para ti.

### Declaración de Variables
Las variables son elementos fundamentales en cualquier lenguaje de programación, pues nos permiten almacenar valores. En C++, se pueden declarar variables de diferentes tipos, estos son:
- Numeros:
  + enteros = **_int_**
  + decimales = **_float_** o **_double_**
- Texto:
  + caracteres = **_char_**
  + cadenas de texto = **_string_**
- Lógicos
  + booleanos = **_bool_**

Para declarar una variable se debe indicar el tipo de variable, el nombre de la variable (identificador) y darle un valor opcional (inicialización), algo como: 
`tipo_de_dato nombre_de_la_variable = valor; // valor puede ser opcional`
Ejemplo de uso:
```bash
  int numero; // Declaración de variable
  int edad = 19; // Declaración de variable inicializandola
```


Tipos de Datos
Es importante comprender los diferentes tipos de datos en C++ y cómo se utilizan. Algunos de los tipos de datos más comunes incluyen:

Enteros: Representan números enteros, como 1, 2, -5, etc.
Flotantes: Representan números decimales, como 3.14, 0.5, -2.75, etc.
Caracteres: Representan caracteres individuales, como 'a', 'B', '$', etc.
Estructuras de Control
Las estructuras de control te permiten controlar el flujo de ejecución de un programa. Algunas de las estructuras de control más comunes son:

Condicionales: Permiten ejecutar cierto bloque de código si se cumple una condición. Por ejemplo:
cpp
Copy code
if (condicion) {
    // código a ejecutar si la condición es verdadera
} else {
    // código a ejecutar si la condición es falsa
}
Bucles: Permiten ejecutar un bloque de código repetidamente. Por ejemplo:
cpp
Copy code
for (int i = 0; i < 5; i++) {
    // código a ejecutar en cada iteración
}
Funciones
Las funciones son bloques de código que realizan una tarea específica y pueden ser reutilizadas en diferentes partes del programa. Aquí hay un ejemplo de cómo se declara una función en C++:

cpp
Copy code
int suma(int a, int b) {
    return a + b;
}
En este ejemplo, hemos declarado una función llamada suma que toma dos parámetros de tipo entero y devuelve su suma.

¡Estos son solo algunos de los conceptos básicos que necesitas conocer para empezar a programar en C++! Si tienes alguna pregunta o necesitas más información sobre alguno de estos temas, no dudes en preguntar en el apartado de discusiones del repositorio.

Puedes adaptar este texto según las necesidades y nivel de conocimiento de tus compañeros de clase. ¡Espero que sea útil!






