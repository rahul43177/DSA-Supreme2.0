// naive approach
#include<iostream>
using namespace std;

bool isPrime(int n) {
    if(n == 1) return false;
    for(int i = 2;i<n;i++) {
        if(n%i == 0) return false;
    }
    return true;
}

int main() {
    int number = 5;
    bool find = isPrime(number);

    if(find) cout << "The number is prime";
    else cout <<"The number is not prime";
}

// optimised
