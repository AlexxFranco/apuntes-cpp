/* Este programa simple en C++ imprime "Hello World" en la consola.
   Utiliza la biblioteca estándar iostream para la entrada y salida de datos.
   Se incluye la biblioteca iostream que proporciona funcionalidades para 
   entrada y salida de datos mediante cout y cin, además de otras funcionalidades útiles.
   La sintaxis para incluir una biblioteca es 
    '#include <nombre_biblioteca>;' */
#include <iostream>

/* Los espacios de nombres (namespaces) son fragmentos de código que permiten 
   mantener una organización dentro del propio código y en las bibliotecas.
   Aquí se usa el espacio de nombres std, que junto con la biblioteca iostream, 
   permite utilizar cout y cin para entrada y salida de datos. */
using namespace std;

/* La función main es el punto de entrada del programa.
   Es el fragmento de código que se ejecuta una vez que se ha compilado el código.
   Solo puede haber una función main en un programa de C++, 
   declarada como int y que devuelve 0 para indicar que no hubo errores en su ejecución. */
int main() {
    /* Utilizamos cout para imprimir una cadena de texto "Hello World" en la consola,
       seguido de un salto de línea mediante endl. */
    cout << "Hello World" << endl;
  
    /* Todas las declaraciones que realicemos dentro de un programa de C++ siempre
       deben de terminar en punto y coma (;), pues de esta manera el compilardor
       sabe cuando termina una instrucción, si se omite se genera un error, por 
       lo general es uno de los errores más comunes al empezar a programar por 
       lo que no está de más verificarlos al finalizar de escribir nuestro código */

    // La declaración 'return 0' indica que el programa se ejecutó correctamente y termina.
    return 0;
}
