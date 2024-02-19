#include<iostream>
using namespace std;

int countTheDigits(int num) {
    int count = 0;
    while(num--) {
        num = num/10;
        count++;
    }
    return count;
}

int main() {
    int number = 123467;

    cout << "The number of digits are " << countTheDigits(number) << " ";
    
    
    return 0;
}