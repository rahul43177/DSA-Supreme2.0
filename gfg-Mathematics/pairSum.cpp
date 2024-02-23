#include<iostream>
using namespace std;

bool isEven(int number) {
  if(number % 2 ==0) {
    return true;
  }
  return false;
}


int main() {
  int number = 12;
  int find = isEven(number);

  if(find) cout << "The number is even";
  else cout << "The number is odd";
  return 0;
}

