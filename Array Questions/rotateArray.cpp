#include<iostream>
#include<vector>
using namespace std; 

void rotateArrayByK(vector<int> &arr , int k) {
    int size  = arr.size();
    vector<int> ansArr(size);

    for(int i =0;i<size;i++) {
        ansArr[(i+k)%size] = arr[i];
    }
    arr = ansArr;
}
void printArr(vector<int> arr ) {
    int n = arr.size();
    for(int i  = 0;i<arr.size();i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    vector<int> arr = {10,20,30,40,50,60};
    int k = 2 ;

    rotateArrayByK(arr , k); 
    printArr(arr);
}