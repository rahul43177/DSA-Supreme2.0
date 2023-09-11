//THis is binary search ,  for it to work , the array should be sorted 
#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr , int key) {
    int start = 0;
    int end = arr.size()-1;
    int mid = (start + end )/2;
    
    while(start <=end) {
        int element = arr[mid];
        if(element == key) {
            return mid;
        } else if(key < element ) {
            //search in left
            end = mid-1;
        } else {
            //search in right
            start = mid + 1;
        }
        mid = (start + end)/2;
    }
    return -1;
}
int main() {
    int n;
    cout << "Please enter the size of the array: \n";
    cin >> n;
    vector<int> arr(n);
    cout << "Please enter the elements into the array \n";
    for(int i = 0;i<n;i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Please enter the key you want to find inside the array \n";

    cin >> key;

    int indexOfTarget = binarySearch(arr , key);
    if(indexOfTarget == -1 ){
        cout << "Element not found \n";
    } else {
        cout << "ELement is there in the array at index " << indexOfTarget << "\n";
    }
}