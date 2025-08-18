#include <stdio.h> // Biblioteca estándar para entrada y salida

int main() {
    int horas_trabajadas, horas_extras = 0;
    const float tarifa_normal = 350.00f;
    const float tarifa_extra = 1.5 * tarifa_normal;
    float porcentaje = 0.0, retencion = 0.0, sueldo_bruto = 0.0, sueldo_neto = 0.0;
    
    printf("Calculo de sueldo\n");
    printf("Introduce el numero de horas trabajadas: ");
    scanf("%d", &horas_trabajadas);

    if (horas_trabajadas > 40) {
        horas_extras = horas_trabajadas - 40;
        sueldo_bruto = (40 * tarifa_normal) + (horas_extras * tarifa_extra);
    } else {
        sueldo_bruto = horas_trabajadas * tarifa_normal;
    }
    
    if (sueldo_bruto > 10000.00f && sueldo_bruto <= 15000.00f) {
      porcentaje = 0.12;
      retencion = porcentaje * sueldo_bruto;
      sueldo_neto = sueldo_bruto - retencion;
    } else if (sueldo_bruto > 15000.00f) {
      porcentaje = 0.18;  
      retencion = porcentaje * sueldo_bruto;
      sueldo_neto = sueldo_bruto - retencion;
    }
    printf("\nSueldo bruto: $%.2f\n", sueldo_bruto);
    printf("Sueldo neto: $%.2f\n", sueldo_neto);
    return 0;
}