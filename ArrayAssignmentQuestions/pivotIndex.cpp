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

int findLeftAndRightSum(vector<int> &nums) {
    vector<int> leftSum(nums.size() , 0); //the size of the leftSum array is eqaul to the size of array and we have initialised it to 0 
    vector<int> rightSum(nums.size() , 0);

    //left sum 
    for(int i = 1;i<nums.size();i++)  {         //here we have started the iteration from 1 , as left sum will be zero on 0th index
        leftSum[i] = leftSum[i-1] + nums[i-1];
    }
    for(int i = nums.size() - 2; i>= 0; i--) {      //here also last index would be 0 so starting from n-2
        rightSum[i] = rightSum[i+1] + nums[i+1];
    } 

    for(int i = 0;i<nums.size();i++) {
        if(leftSum[i] == rightSum[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {2,1,-1};
    cout << findLeftAndRightSum(nums);

}

