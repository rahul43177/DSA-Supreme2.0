#include <iostream>
using namespace std;

void printDivisors(int n) {
    for(int i = 1;i<=n;i++) {
        if(n%i == 0) {
            cout << i << endl;
        }
    }
}

int main()
{
    int number = 12; // 1 , 2 , 3, 4 , 6 and 12
    // 15 -> 1 , 3 , 5 , 15
    printDivisors(number);
}