#include <stdio.h>

int main() 
{
    int ps, pb, ts, suma, esc, min;
    do 
    {
        printf("Cuantos pisos subio?: ");
        scanf("%d", &ps);
        ts = ts + ps;
        printf("Cuantos pisos bajo?: ");
        scanf("%d", &pb);
        suma = (suma + ps) - pb;
    }   while (ps > 0);
    esc = ts * 60;
    min = (esc * 5) / 60;
    printf("Has incrementado %d min de vida", min);
    return 0;
}