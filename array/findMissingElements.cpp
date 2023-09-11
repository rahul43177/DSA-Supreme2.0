#include <iostream>
using namespace std;

void missingElement(int arr[] , int size) {
    for(int i = 0;i<size;i++) {
        int index = arr[i]-1;
        if(arr[i] != arr[index]) {
            swap(arr[i] , arr[index]);
        } else {
            ++i;
        }
    }
    for(int i = 0;i<size;i++) {
        if(arr[i] != i+1) {
            cout << i+1 << endl ;
        }
    }
}

int main() {
    int arr[] = {1,2,4,4,5};
    int size = sizeof(arr)/sizeof(int);
    
    missingElement(arr , size);
}