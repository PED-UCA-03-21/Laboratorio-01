#include <iostream>

using namespace std;

int fibonacci(int n) {
  if (n < 2) {
    return n;
  }
  return fibonacci(n-1) + fibonacci(n-2);
}

int main() {

  //VALOR EMEPZANDO DESDE 0
  int value = 4;

  cout << "VALOR DE N: " << value << endl;
  cout << "FIBONACCI: " << fibonacci(value) << endl;

  return 0;
}