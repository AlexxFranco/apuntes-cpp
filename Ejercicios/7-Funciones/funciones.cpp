#include <stdio.h>

int factorial(int n) 
{
    int suma, i;
    suma = n;
    for (i = n - 1; i >= 1; i--) 
    {
        suma = suma * i;
    }
    return suma;
}

int potencia(int n, int expo) 
{
    int res, j;
    res = n;
    for (j = 1; j < expo; j++) 
    {
        res = res * n;
    }
    return res;
}


int main() 
{
    int n, expo, resf, resp;
    printf("Introduce un numero: ");
    scanf("%d", &n);
    printf("Introduce un exponente: ");
    scanf("%d", &expo);
    resf = factorial(n);
    printf("El factorial es: %d", resf);
    resp = potencia(n, expo);
    printf("\nLa potencia %d de %d es: %d", expo, n, resp);
    return 0;
}