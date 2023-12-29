//pair sum problem - gfg 
//algo - two pointer 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


bool pairSum(vector<int>&arr , int target) {
    //we need to sort the array 
    sort(arr.begin() , arr.end());
    int size = arr.size();
    int low = 0;
    int high = size-1;

    while(low <=high) {
        int sum = arr[low] + arr[high];
        if(sum == target) {
            return true;
        } else if(sum < target) {
            low++;
        } else {
            high--;
        }
    }
    return false;
}

int main() {
    vector<int> arr= {1,10,23,45,4,34};
    int target = 33;

    bool result = pairSum(arr , target);

    if(result) cout << "We have found the pairs";
    else cout<< "We have not found the pair";
}