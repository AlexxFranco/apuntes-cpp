# Conceptos previos y fundamentales

En esta sección, cubriremos los conceptos básicos que son esenciales para comprender los ejercicios de lógica de programación en este repositorio. Si eres nuevo en la programación o necesitas repasar algunos fundamentos, esto es ideal para ti.

### 1. Comentarios de código.
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

### 2. Declaración de variables y tipos de datos.
Las variables son elementos fundamentales en cualquier lenguaje de programación, pues nos permiten almacenar valores. En C++, se pueden declarar variables de diferentes tipos, los más comunes y utilizados son:
- Numeros:
  + enteros = **_int_**
  + decimales = **_float_** o **_double_**
- Textos:
  + caracteres = **_char_**
  + cadenas de texto = **_string_** (con ayuda de otra herramienta)
- Lógicos
  + booleanos = **_bool_**

Para declarar una variable se debe indicar el tipo de variable, el nombre de la variable (identificador) y darle un valor opcional (inicialización).
Algo como: 

`tipo_de_dato nombre_de_la_variable = valor; // valor puede ser opcional`

Ejemplo de uso:
```C++
  int numero; // Declaración de variable llamada numero
  int edad = 19; // Declaración de variable llamada edad inicializandola en 19
  float estatura = 1.75f;
  double peso = 74.823;
  string nombre = "Cesar";
  char genero = 'M';
  numero = 123;
```

Con los ejemplos anteriores debemos abarcar los siguientes puntos:
+ Un tipo de dato solo puede recibir el tipo de dato que especifica, por ejemplo int solo recibe datos enteros, de otra manera se genera un error.
+ La diferencia entre float y double solo radica en que double soporta valores mucho más altos para números decimales, float para 32 bits y double para 64 bits.
+ Si se quiere especificar directamente que un valor sea float se puede agregar **f** al final del valor.
+ Los valores para los tipos string se escriben entre doble comillas: "valor".
+ El valor para un caracter se escribe entre comillas simples: 'A'.
+ Las variables se pueden inicializar en su declaración o después de su declaración, si se asigna un valor despues de la declaración solo es necesario hacer referencia a la variable mediante su nombre o identificador.

### 3. Bibliotecas (*Libraries*).
Las bibliotecas son componentes esenciales en la programación. Estos archivos contienen conjuntos de funciones y definiciones que pueden ser utilizados en nuestros programas para realizar tareas específicas. Algunas de las bibliotecas más comunes en C++ son:

- **stdio.h**: Proporciona funciones para entrada y salida de datos estándar, algunas funciones comunes son **printf**(para imprimir o mostrar información por consola), **scanf**(para leer datos por teclado).
- **iostream**: Proporciona las funciones básicas de entrada y salida, como **cin**(similar a print) y **cout**(similar a scanf), es más recomendable que stdio.h.
- **vector**: Implementa vectores dinámicos que pueden crecer o disminuir de tamaño según sea necesario.
- **string**: Proporciona funciones y clases para trabajar con cadenas de texto.
- **algorithm**: Ofrece algoritmos para realizar operaciones en contenedores, como ordenar, buscar, entre otras.

Para hacer el llamado a una biblioteca debemos hacer lo siguiente en la cabecera del programa, es decir en la primera línea (de preferencia):
  `#include <nombre_de_la_biblioteca>`

Ejemplo de uso:
```C++
#include <stdio.h>

printf("Esto es una cadena de texto");
```
En el ejemplo anterior de no haber incluido la biblioteca _**stdio.h**_, no habría podido hacer uso de la funcion printf que me permite mostrar mensajes por terminal, y por lo tanto yo hubiera tenido que programar una funcionalidad que me permitiera realizar esta tarea, pero con el uso de printf de stdio.h, esto es tiempo de ahorro.

Esto nos enseña que las bibliotecas nos permiten organizar y reutilizar código de manera efectiva.
Al incluir bibliotecas en nuestros programas, podemos aprovechar funcionalidades predefinidas y mejorar la eficiencia y legibilidad de nuestro código.

### 4. Declaración del main.
La función main es el punto de entrada de un programa en C++. Todo programa en C++ debe tener exactamente una función main. La declaración del main sigue la siguiente sintaxis general:

```C++
int main() {
    // Cuerpo del programa
    return 0;
}
```
+ **int**: Como ya lo habíamos mencionado en la parte de tipos de datos, este indica el tipo de dato que la función main devuelve al finalizar su ejecución. Normalmente, se utiliza int para indicar el estado de salida del programa. Un valor de retorno de 0 generalmente indica que el programa se ejecutó correctamente, mientras que un valor distinto de 0 puede indicar algún tipo de error. Esto de devolver valores se analizará más a fondo en el tema de **_funciones_**

- **main( )**: Es el nombre de la función principal. Puede recibir argumentos de línea de comandos, los cuales se declaran dentro de los corchetes, algo que nuevamente es tema de funciones y se vera más adelante, por el momento quedemos en que puede ser vacío sin problemas.

- **{ }**: Delimitan el cuerpo de la función main. Dentro de estas llaves se colocan las instrucciones que se ejecutarán cuando el programa se ejecute.

- **return 0**: Indica que el programa ha finalizado correctamente. Devolver un valor diferente de 0 en main generalmente indica que el programa ha terminado con algún tipo de error.

Es importante recordar que la función main debe devolver un valor de tipo int, ya sea explícitamente con **_return_**, o implícitamente al llegar al final de la función. La omisión del return en la función main se considera equivalente a return 0. Además hay que aclarar que el valor 0 se considera un entero que coincide con el tipo int de retorno declarado antes de nombrar al programa main.
