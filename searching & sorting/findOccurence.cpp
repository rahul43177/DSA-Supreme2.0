//find the first occurence of repeated arrays



#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int> arr , int target) { 
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e) {
        if(arr[mid] == target) {
            ans = mid;
            e = mid - 1;
        } else if(target < arr[mid]) {
            //left search
            e = mid -1;
        } else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {
    vector<int> arr{1,2,3,5,5,5,5};
    int target = 5;

    int index = firstOcc(arr , target);
    cout << "First occurence is " << index << endl;
}