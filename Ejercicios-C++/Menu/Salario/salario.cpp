#include <iostream> // Biblioteca estandar 
#include <iomanip>  // Biblioteca para dar formato a las salidas

// Espacio de nombres para usar cout y cin en lugar de printf
using namespace std;

int main() {
  // Variables para almacenar las horas trabajadas totales y para las horas extras
  int horas_trabajadas = 0, horas_extras, horas_normales;
  // Las tarifas como no varian son constantes
  const float TARIFA_NORMAL = 350.00f;
  const float TARIFA_EXTRA = 1.5 * TARIFA_NORMAL;
  // Variables decimales para los sueldos, el porcentaje de retencion y la retencion
  double retencion, sueldo_bruto, sueldo_neto, sueldo_normal, sueldo_extra = 0, porcentaje = 0;
  
  cout << "----CALCULO DE NOMINA----" << endl;
  // Manejo de entradas inválidas
  while (horas_trabajadas <= 0) {
    cout << "Por favor, introduce un numero de horas valido: ";
    /* Leemos las horas trabajadas totales hasta que se
    introduzca una correcta */
    cin >> horas_trabajadas;
    // Limpiamos el búfer de entrada de datos
    cin.ignore();
  }
  if (horas_trabajadas <= 40) {
    /* Si las hrs trabajadas son menores o iguales a 40, entonces 
      calculamos el sueldo bruto con la tarifa normal de $350.00 */
    sueldo_bruto = horas_trabajadas * TARIFA_NORMAL;
    // El sueldo normal será igual al sueldo bruto
    sueldo_normal = sueldo_bruto;
    // Las horas normales serán las horas trabajadas
    horas_normales = horas_trabajadas;
  } else {
    /* Si las hrs superan las 40 hrs, restamos 40 hrs a la cantidad
      de hrs trabajadas para obtener las horas extra, pues el limite 
      de las horas normales siempre seran 40 */
    horas_normales = 40;
    horas_extras = horas_trabajadas - horas_normales;
    /* Calculamos el sueldo bruto, primero el sueldo normal que es la 
    cantidad limite de horas (40) por la tarifa normal y luego el suelgo extra
    multiplicando las hrs extra por la tarifa extra, al final 
    sumamos el sueldo de las horas extra y el de la tarifa normal */
    sueldo_normal = horas_normales * TARIFA_NORMAL;
    sueldo_extra = horas_extras * TARIFA_EXTRA;
    sueldo_bruto = sueldo_normal + sueldo_extra;
  }
  if (sueldo_bruto <= 10000.00f) {
    /* Si el sueldo bruto es menor o igual a 10000.00 entonces no habrá
      retenciones, por lo tanto es el sueldo neto o final */
    sueldo_neto = sueldo_bruto;
  } else if ((sueldo_bruto > 10000.00f)&&(sueldo_bruto <= 15000.00f)) {
    /* Si el sueldo bruto ronda entre los más de 10000 y menos de 15000, 
      entonces deducimos un porcentaje de retencion del %12 para obtener 
      el sueldo neto.
      Calculamos la retencion que es del %12 sobre el sueldo bruto.
      Después restamos la retencion al sueldo bruto para obtener el 
      sueldo neto */
    porcentaje = 0.12;  
    retencion = porcentaje * sueldo_bruto;
    sueldo_neto = sueldo_bruto - retencion;
  } else {
    /* Si el sueldo bruto ronda los más de 15000, entonces
      deducimos una porcentaje de retencion del %18 para obtener el sueldo neto.
      Calculamos la retencion que es del %18 sobre el sueldo bruto.
      Después restamos la retencion al sueldo bruto para obtener el 
      sueldo neto */
    porcentaje = 0.18;  
    retencion = porcentaje * sueldo_bruto;
    sueldo_neto = sueldo_bruto - retencion;
  }
  // Se utiliza fixed y setprecision para formatear los números de punto flotante
  cout << "\nHoras laboradas normales: " << horas_normales << endl; // Se muestran las horas laboradas normales (max 40)
  cout << "Horas laboradas extras: " << horas_extras << endl; // Se muestras las horas laboradas extras (despues de 40)
  cout << "Sueldo normal ($350.00 x hr / max 40 hrs): $" << fixed << setprecision(2) << sueldo_normal << endl; // el sueldo ganado por las horas normales
  cout << "Sueldo extra ($525.00 x hr / hrs despues 40 hrs): $" << fixed << setprecision(2) << sueldo_extra << endl; // el sueldo ganado por las horas extras
  cout << "Sueldo bruto: $" << fixed << setprecision(2) << sueldo_bruto << endl; // el sueldo bruto total (normal + extra)
  cout << "Tu retencion es del " << fixed << setprecision(0) << porcentaje * 100 << "%, el monto retenido es de: $" << fixed << setprecision(2) << retencion << endl; // Deducción del porcentaje de retencion y la cantidad retenida
  cout << "Menos retenciones, su sueldo neto es de: $" << fixed << setprecision(2) << sueldo_neto << endl; // Sueldo neto o final

  return 0;
}