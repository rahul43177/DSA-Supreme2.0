#include<iostream>
using namespace std;

bool isPalindrome(int number) {
    int temp = number;
    //we will not change anything in number , we will change the temp 
    int rev = 0;
    while(temp!=0) {
        int lastDigit = temp%10;
        rev = rev*10 + lastDigit;
        temp = temp/10;
    }
    bool findOut ;
    if(rev == number) {
        findOut = true;
    } else {
        findOut = false;
    }
    return findOut;
}

int main() {
    int number = 123321;
    bool find = isPalindrome(number);

    if(find == true) {
        cout << "The number is palindrome \n";
    } else {
        cout << "The number is not palindrome" ;
    }

}