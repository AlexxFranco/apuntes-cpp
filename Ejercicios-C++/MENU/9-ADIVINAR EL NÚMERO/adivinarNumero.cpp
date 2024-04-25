#include <stdio.h> // Standar Input/Output Library
#include <cstdlib> // C STanDar LIBrary para el uso de rand()

using namespace std;

int main() {
    // Declarar variables
    int numero_aleatorio, numero_usuario;
    // Generar un número aleatorio entre 1 y 100
    numero_aleatorio = rand() % 100 + 1;
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
        // Si no adivina el número, revelar los intentos
        if (i == 9) 
        {
            printf("Se te han acabado los intentos. El número era: ");
        }
    }
    return 0;
}
