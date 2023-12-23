#include<iostream>
#include<vector>
using namespace std;

void sortColor(vector<int> &arr , int size) {
    int left = 0;
    int right = size -1;
    int i =0;
    while(left < right) {
        if(arr[i] == 0) {
            swap(arr[i] , arr[left]);
            left++;
            i++;
        } else if(arr[i] == 1) {
            left++;
        } else {
            swap(arr[i] , arr[right]);
            right--;
        }
    }
}

int main() {
    vector<int> arr = {1,2,1,2,0,0,1,2,2};
    int size = arr.size();

    sortColor(arr , size);
    for(int i =0;i<arr.size();i++) {
        cout << arr[i] << " ";
    }
}