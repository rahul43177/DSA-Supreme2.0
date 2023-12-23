#include<iostream>
#include<vector>
using namespace std;

int findMissingNumber(vector<int>&nums) {
    int n = nums.size();
    int sum = 0;
    for(int index= 0;index<n;index++) {
        sum = sum + nums[index];
    }
    cout << "sum "<< sum << endl;

    int totalSum = ((n)*(n+1))/2;
    int ans = totalSum - sum;
    return ans;
}

int main() {
    vector<int> nums = {3,0,1};
    // int n = nums.size();

    cout << findMissingNumber(nums);
}