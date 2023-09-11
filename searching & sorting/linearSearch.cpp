//This is linear search , going to the each index and checking whether the element is equal to the key or not 
//This is has nice time complexity of O(n)

#include <iostream>
#include <vector>
using namespace std;

int findElement(vector<int> arr , int key ) {
    int size = arr.size();
    for(int i = 0;i<arr.size();i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    cout <<"PLease enter the size of array \n";
    int n;
    cin >> n;
    vector<int> arr(n);
    cout <<"Please enter the elements of array \n";
    for(int i =0;i<n;i++) {
        cin >> arr[i];
    }   

    int found = findElement(arr , 5); 
    if(found != -1) {
        cout << "The Element is at the index " << found;
    } else {
        cout << found;
    }

}