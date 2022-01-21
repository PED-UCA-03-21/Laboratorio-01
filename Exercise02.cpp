#include <iostream>

using namespace std;

void divide(int a, int b, int *quotient, int *remainder) {
  cout << a << " / " << b << endl;
  *quotient = a / b;
  *remainder = a % b;
}

int main() {
  int a, b, quotient, remainder, *q, *r;

  cout << "INGRESE EL VALOR DE A: ";
  cin >> a;

  cout << "INGRESE EL VALOR DE B: ";
  cin >> b;

  cout << endl << "DIVISION MK1" << endl;
  divide(a, b, &quotient, &remainder);
  cout << "COCIENTE: " << quotient << endl << "RESIDUO: " << remainder << endl;

  cout << endl << "DIVISION MK2" << endl;
  q = &quotient, r = &remainder;
  divide(a + 1, b + 1, q, r);
  cout << "COCIENTE: " << *q << endl << "RESIDUO: " << *r << endl;

  return 0;
}