//naive approach
#include<iostream>
using namespace std ;

int findTrailingZeroes(int number) {
    int fact = 1;
    for(int i = number ; i>0;i--) {
        fact *= i;
    }
    int count = 0;
    while(fact % 10 == 0) {
        count++;
        fact = fact/10;
    }
    return count;
}

int main() {
    int number=5;
    int zeroes = findTrailingZeroes(number);
    cout << "The trailing zeroes are " << zeroes << endl;
}


// #include<iostream>
// using namespace std ;

// int findTrailingZeroes(int number) {
    
// }

// int main() {
//     int number;
//     int zeroes = findTrailingZeroes(number);
//     cout << "The trailing zeroes are " << zeroes << endl;
// }