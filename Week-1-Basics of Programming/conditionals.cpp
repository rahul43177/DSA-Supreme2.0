//check positive , negative or zero 
#include<iostream>
using namespace std; 

string numberCheck(int number) {
    if(number > 0) {
        return "The number is positive";
    }else if(number < 0) {
        return "The number is negative";
    }else {
        return "The number is zero";
    }
}

int main() {
    int number;
    cout << "Enter number : ";
    cin >> number;
    cout << numberCheck(number) << endl;
}