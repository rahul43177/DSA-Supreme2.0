#include<iostream>
#include<vector>
using namespace std;

void sortColor(vector<int> &arr) {
    int size = arr.size();
    int left = 0;
    int right = size -1;
    int i = 0; //index - traversing of array

    while(i <= right) {
        if(arr[i] == 0) {
            swap(arr[i] , arr[left]);
            left++;
            i++;
        } else if(arr[i] == 2) {
            swap(arr[i] , arr[right]);
            right--;
        } else {
            i++;
        }
    }
}


void print(vector<int> arr) {
    int size = arr.size();
    int i = 0;
    while(i<size) {
        cout << arr[i] << " ";
        i++;
    }
}

int main() {
    vector<int> arr= {0,0,2,0,1,1,0,2,0,2,1,0,2,1,0};

    sortColor(arr);
    print(arr);
    
    return 0;


}