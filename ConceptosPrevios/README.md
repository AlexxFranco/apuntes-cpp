# Conceptos previos y fundamentales

En esta sección, cubriremos los conceptos básicos que son esenciales para comprender los ejercicios de lógica de programación en este repositorio. Si eres nuevo en la programación o necesitas repasar algunos fundamentos, esto es ideal para ti.

### Comentarios de código
Para mejorar la legibilidad y comprensión del código, es fundamental integrar comentarios adecuados en nuestro programa. Estos comentarios no solo nos benefician a nosotros, sino que también facilitan la comprensión para otros colaboradores.
En C++, existen dos formas comunes de realizar comentarios: de una sola línea y de múltiples líneas. Este proceso, conocido como documentación de código, es una práctica estándar de desarrollo.
Para comentar una sola línea, se emplea doble diagonal **//**, seguida del texto que deseamos comentar. 
Por otro lado, para comentarios en varias líneas, se utilizan los caracteres **/\*\*/**, dentro de los cuales todo lo que se incluya será considerado como comentario. Esta forma es útil para comentarios extensos que abarcan varias líneas de código.
Es importante destacar que los comentarios son ignorados por el compilador, lo que significa que cualquier contenido escrito dentro de ellos no afectará la ejecución del programa. Esta característica ofrece la libertad de proporcionar explicaciones detalladas o notas sin riesgo de afectar el funcionamiento del código.

Ejemplo de uso:
```C++
  // Esto es un comentario de línea
  /* Esto también es un comentario de línea */
  /* Esto es un 
     comentario multilínea */
  /* Esto 
   * también 
   * es un 
   * comentario 
   * multilínea 
   * más estetico */   
```

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

Para declarar una variable se debe indicar el tipo de variable, el nombre de la variable (identificador) y darle un valor opcional (inicialización).
Algo como: 

`tipo_de_dato nombre_de_la_variable = valor; // valor puede ser opcional`

Ejemplo de uso:
```C++
  int numero; // Declaración de variable
  int edad = 19; // Declaración de variable inicializandola
```
