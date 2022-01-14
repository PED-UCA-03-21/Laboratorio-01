#include <iostream>

using namespace std;

struct Complex
{
  int real, imaginary;
};

Complex addComplex(Complex c1, Complex c2){
  Complex result;

  result.real = c1.real + c2.real;
  result.imaginary = c1.imaginary + c2.imaginary;

  return result;
}

int main() {
  Complex c1, c2;

  cout << "INGRESE EL PRIMER COMPLEJO" << endl << "REAL: ";
  cin >> c1.real;
  cout << "IMAGINARIA: ";
  cin >> c1.imaginary;
  cout << endl;

  cout << "INGRESE EL SEGUNDO COMPLEJO" << endl << "REAL: ";
  cin >> c2.real;
  cout << "IMAGINARIA: ";
  cin >> c2.imaginary;
  cout << endl;

  Complex addResult = addComplex(c1, c2);
  cout << "RESPUESTA: " << addResult.real << " + " << addResult.imaginary << "i" << endl;

  return 0;
}