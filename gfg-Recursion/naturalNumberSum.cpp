#include<iostream>
using namespace std;

int naturalSum(int number) {
    if(number <= 1) return number;
    return number + naturalSum(number-1); 
}

int main() {
    int number = 3; //3+2+1 = 6
    //output = 6
    cout << naturalSum(number);
}