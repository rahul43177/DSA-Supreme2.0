
// //brute force method - using 2 for loops 
// #include<iostream>
// #include<vector>
// using namespace std;

// bool keyPair(vector<int> arr , int size , int target) {

//     for(int i = 0;i<size;i++) {
//         for(int j = i+1;j<size;j++) {
//             if(arr[i] + arr[j] == target ) {
//             return true;
//             }
//         }
//     }
//     return false;
// }

// int main() {
//     vector<int> arr = {1,4,45,6,10,8};
//     int size = arr.size();
//     int target = 16442;
//     bool result = keyPair(arr , size, target);
//     if(result == true ) {
//         cout << "Found" << endl;
//     } else if(result == false) {
//         cout << "Not Found" << endl;
//     }

// }

//optimised using 2 pointers 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool keyPair(vector<int>arr , int size , int target) {
    //first sort the array 
    sort(arr.begin() , arr.end());
    int low = 0;
    int high = size - 1;
    while(low < high ) {
        int sum = arr[low] + arr[high];
        if(sum == target ) {
            return true;
        } else if(sum > target) {
            high--;
        } else {
            low++;
        }
    }
    return false;
}

int main() {
    vector<int> arr = {1,4,45,6,10,8};
    int size = arr.size();
    int target = 16;

    bool result = keyPair(arr , size , target);
    if(result == true) {
        cout << "We found the pair" << endl;
    } else {
        cout << "We did not find the pair" << endl;
    }
}