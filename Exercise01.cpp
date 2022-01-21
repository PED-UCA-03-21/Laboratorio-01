#include <iostream>

using namespace std;

int main(void) {
  int arrayLength = 5;
  char charArr[] = {'a', 'b', 'c', 'd', 'e'};
  char *pointer;

  pointer = charArr;

  cout << "NORMAL" << endl;
  for (int i = 0; i < arrayLength; i++){
    cout << "Elemento " << i+1 << ": " << *(pointer + i) << endl;
  }

  cout << endl;

  cout << "REVERSE" << endl;
  for (int i = (arrayLength - 1); i >= 0; i--){
    cout << "Elemento " << i+1 << ": " << *(pointer + i) << endl;
  }

  cout << endl;

  cout << "REVERSE ALT" << endl;
  pointer = charArr + (arrayLength - 1);
  for (int i = 0; i < arrayLength; i++){
    cout << "Elemento " << arrayLength - i << ": " << *(pointer - i) << endl;
  }
  
  return 0;
}