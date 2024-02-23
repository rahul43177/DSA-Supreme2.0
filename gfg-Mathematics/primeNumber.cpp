// naive approach
// #include<iostream>
// using namespace std;

// bool isPrime(int n) {
//     if(n == 1) return false;
//     for(int i = 2;i<n;i++) {
//         if(n%i == 0) return false;
//     }
//     return true;
// }

// int main() {
//     int number = 5;
//     bool find = isPrime(number);

//     if(find) cout << "The number is prime";
//     else cout <<"The number is not prime";
// }

// optimised

// #include <iostream>
// using namespace std;

// bool isPrime(int number)
// {
//     if (number == 1)
//         return false;

//     for (int i = 2; i * i <= number; i++)
//     {
//         if (number % i == 0)
//             return false;
//     }
//     return true;
// }

// int main()
// {
//     int number = 130;
//     bool find = isPrime(number);
//     if (find)
//         cout << "The number is prime";
//     else
//         cout << "The number is not prime";
// } // here we are trying to find the pair , and hence we are just going to the root of n if we find something then , the number is not prime

// more efficient method
//checking intially divisibilty for 2 and 3 

#include<iostream>
using namespace std; 

bool isPrime(int n) {
    if(n == 1) return false;
    if(n == 2 || n == 3 ) return true;

    if(n%2 == 0 || n%3 == 0) return false;

    for(int i = 5;i*i<=n;i=i+6) {
        if(n%i == 0 || n%(i+2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number = 13 ;

    bool find = isPrime(number);
    if(find) cout << "The number is prime";
    else cout << "The number is not prime"; 
}