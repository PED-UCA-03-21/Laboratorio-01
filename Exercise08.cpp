#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string word, int left, int right) {
  if(left >= right) {
    return true;
  }
  
  if(word[left] == word[right]) {
    return isPalindrome(word, left + 1, right -1);
  }

  return false;  
}

string getResultString(bool state) {
  return state ? "ES PALINDROMA" : "NO ES PALINDROMA";
}

int main() {
  int wordsQtn = 5;
  string words[] = { 
    "OREJERO",
    "AGUA",
    "SOLLOS",
    "SOMETEMOS",
    "ESTABLO" 
  };

  for (int i = 0; i < wordsQtn; i++){
    bool result = isPalindrome(words[i], 0, words[i].length() - 1);

    cout << "PALABRA " << i + 1 << ": " << words[i] << " - " 
      << getResultString(result) << endl; 
  }

  return 0;
}