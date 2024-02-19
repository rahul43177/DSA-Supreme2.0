//brute force approach

// //brute force approach - find the left sum and then right sum and if they are equal - return the index
// #include<iostream>
// #include<vector>
// using namespace std;

// int pivotIndex(vector<int> &nums) {
//     for(int i = 0;i<nums.size();i++) {
//         int lsum = 0;
//         int rsum = 0;

//         for(int j = 0;j<i;j++) {
//             lsum += nums[j];
//         } 
//         for(int j = i+1;j<nums.size();j++) {
//             rsum += nums[j];
//         }
//         if(lsum == rsum) return i;
//     }
//     return -1;
// }

// int main() {
//     vector<int> nums= {1,7,3,6,5,6};


//     cout << pivotIndex(nums);
// }

//Optimised solution 
#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int> &nums) {
    
}

int main() {
    vector<int> nums= {1,7,3,6,5,6};


    pivotIndex(nums);
}