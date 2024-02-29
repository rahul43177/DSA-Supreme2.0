#include<iostream>
using namespace std;

int factorialFinder(int number) {
    if(number == 0 || number == 1) {
        return 1;
    }
    return number * factorialFinder(number - 1);
}
int main() {
    int number = 3;
    int fact = factorialFinder(number);
    cout << "The factorial of "<<number << " is " << fact << endl;
}