#include <iostream>

using namespace std;

int main() {
  int a = 0, b = 0, c = 0;
  cout << "Ingrese un numero: ";
  cin >> a;
  cout << "Ingrese otro numero: ";
  cin >> b;
  while (a<=b) {
    if (a % 2 != 0) {
      c += 1;
    }
    a += 1;
  }
  cout << "Entre el numero " << (a - b) - 1 << " y el numero " << b << " hay " << c << " numeros pares" << endl;
  cin.ignore();
  return 0;
}