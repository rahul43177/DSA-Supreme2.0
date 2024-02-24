#include<iostream>
using namespace std;

void findPrimeFactors(int n) {
    if(n <= 1) return;

    for(int i=2;i*i<=n;i++) {
        while(n%i == 0) {
            cout << i << endl;
            n/=i;
        }
    }
    if(n>1) {
        cout << n << endl;
    }
}
int main() {
    int number = 72;
    findPrimeFactors(number);
}