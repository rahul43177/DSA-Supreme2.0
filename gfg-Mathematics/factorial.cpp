//my approach

// #include<iostream>
// using namespace std;

// int fact(int number) {
//     int factorial = 1;
//     if(number == 0 || number == 1) {
//         return factorial;
//     }

//     for(int i = number;i > 0;i--) {
//         factorial *= i;
//     }
//     return factorial;
// }


// int main() {
//     int number = 4;
//     int factorial = fact(number);
//     cout << "The factorial of " << number << " is " << factorial << endl;
// }


//recursive approach 

#include<iostream>
using namespace std;

int findFact(int num) {
    if(num == 0) {
        return 1;
    }
    return (num* findFact(num-1));
}


int main() {
    int number = 5;

    int fact = findFact(number);
    cout << "The factorial of " << number << " is " << fact << endl;
}