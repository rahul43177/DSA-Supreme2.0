//naive approach
// #include<iostream>
// using namespace std ;

// int findTrailingZeroes(int number) {
//     int fact = 1;
//     for(int i = number ; i>0;i--) {
//         fact *= i;
//     }
//     int count = 0;
//     while(fact % 10 == 0) {
//         count++;
//         fact = fact/10;
//     }
//     return count;
// }

// int main() {
//     int number=10;
//     int zeroes = findTrailingZeroes(number);
//     cout << "The trailing zeroes are " << zeroes << endl;
// }



//effecient method
// #include<iostream>
// using namespace std;

// int countTrailingZeroes(int n) {
//     int res = 0;
//     for(int i = 5;i<=n;i = i*5) {
//         res = res + n/i;
//     }
//     return res;
// }

// int main() {
//     int number = 10;

//     cout << countTrailingZeroes(number);
// }

#include<iostream>
using namespace std;

int countTrailingZeroes(int n) {
    int res = 0;
    for(int i = 5; i <= n; i = i * 5) {
        res = res + n / i;
    }
    return res;
}

int main() {
    int number = 10;

    cout << countTrailingZeroes(number);
}

