#include <iostream>

using namespace std;

int main() {
  // Variables para almacenar las horas trabajadas totales y para las horas extras
  int horas_trabajadas, horas_extras;
  // Las tarifas como no varian son constantes
  const float TARIFA_NORMAL = 350.00f, TARIFA_EXTRA = 1.5 * TARIFA_NORMAL;
  // Variables de punto decimal para almacenar los sueldos
  double sueldo_bruto, sueldo_neto;
  
  cout << "--CALCULO DE NOMINA--" << endl;
  cout << "Introduce las horas laboradas: ";
  // Leemos las horas trabajadas totales
  cin >> horas_trabajadas;
  if (horas_trabajadas <= 40) {
    /* Si las hrs trabajadas son menores o iguales a 40, entonces 
      calculamos el sueldo bruto con la tarifa normal de 350.00*/
    sueldo_bruto = horas_trabajadas * TARIFA_NORMAL;
  } else {
    /* Si las hrs superan las 40 hrs, restamos 40 hrs a la cantidad
      de hrs trabajadas para obtener las horas extra */
    horas_extras = horas_trabajadas - 40;
    /* Calculamos el sueldo bruto, primero la tarifa normal para la cantidad
      maxima de hrs que son 40, y luego con tarifa extra para las 
      horas extra, al final sumamos el sueldo de ambas tarifas*/
    sueldo_bruto = (40 * TARIFA_NORMAL) + (horas_extras * TARIFA_EXTRA);
  }
  if (sueldo_bruto <= 10000.00f) {
    /* Si el sueldo bruto es menor o igual a 10000.00 entonces no habrá
      retenciones, por lo tanto es el sueldo neto o final */
    sueldo_neto = sueldo_bruto;
  } else if ((sueldo_bruto > 10000.00f)&&(sueldo_bruto <= 15000.00f)) {
    /* Si el sueldo bruto ronda entre los más de 10000 y menos de 15000, 
      entonces deducimos una retencion del %12 para obtener el sueldo neto*/
    sueldo_neto = .88 * sueldo_bruto;
  } else {
    /* Si el sueldo bruto ronda los más de 15000, entonces
      deducimos una retencion del %18 para obtener el sueldo neto*/
    sueldo_neto = .82 * sueldo_bruto;
  }
  cout << "Su sueldo bruto fue de: $" << sueldo_bruto << endl;
  cout << "Menos deducciones, su sueldo neto es de: $" << sueldo_neto << endl;

  return 0;
}