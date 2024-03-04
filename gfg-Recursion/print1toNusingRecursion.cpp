// number to 1 

// #include<iostream>
// using namespace std;

// void printTillOne(int number) {
//     if(number == 0) return;
//     cout << number << " ";
//     printTillOne(number-1);
// }

// int main() {
//     int n = 5;
//     printTillOne(n);
//     return 0;
// }


// 1 to number
#include<iostream>
using namespace std;

void print1ToN(int number) {
    if(number == 0) return;
    print1ToN(number - 1);
    cout << number << " ";
}

int main() {
    int number = 12;
    print1ToN(number);
}