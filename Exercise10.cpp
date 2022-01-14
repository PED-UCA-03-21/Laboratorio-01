#include <iostream>

using namespace std;

float multiply(int a, int b) {
  if (b < 1) {
    return 0;
  }

  return a + multiply(a, b-1);
}

int main() {

  int a = 4, b = 9;

  cout << a << "x" << b << " = " << multiply(a, b) << endl;

  return 0;
}