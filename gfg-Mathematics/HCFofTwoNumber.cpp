#include<iostream>
using namespace std;

int findHCF(int n1, int n2) {
    while(n1!= n2) {
        if(n1>n2) {
            n1 = n1-n2;
        }
        else {
            n2 = n2-n1;
        }
    }
}

int main() {
    int number1 = 6;
    int number2 = 4;

    int hcf = findHCF(number1 , number2);
    cout << "The hcf of " << number1 << " " << number2 << " " << "is " << hcf;  
}