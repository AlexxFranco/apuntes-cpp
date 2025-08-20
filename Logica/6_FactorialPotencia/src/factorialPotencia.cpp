#include <stdio.h>

int main() 
{
    int n, i, suma, pot, expo;
    printf("Introduce un numero: ");
    scanf("%d", &n);
    printf("Introduce un exponente: ");
    scanf("%d", &expo);
    suma = n;
    for (i = n - 1; i >= 1; i--) 
    {
        suma = suma * i;
    }
    pot = n;
    for (int j = 1; j < expo; j++) 
    {
        pot = pot * n;
    }
    printf("El factorial es: %d", suma);
    printf("\nLa potencia %d de %d es: %d", expo, n, pot);
    return 0;
}