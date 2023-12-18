#include<iostream>
#include<limits.h>
using namespace std;
//finding the maximum and minimum
int findMax(int arr[][3] , int rows , int cols) {
    int maxAns = INT_MIN;
    for(int i =0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            if(arr[i][j] > maxAns) {
                maxAns = arr[i][j];
            }
        }
    }
    return maxAns;
}

int findMin(int arr[3][3] , int rows , int cols) {
    int minAns = INT_MAX;
    for(int i =0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            if(arr[i][j] < minAns) {
                minAns = arr[i][j];
            }
        } 
    }
    return minAns;
}
int main() {
    int arr[3][3] = {
        {1,2,3} ,
        {4,5,6} ,
        {7,8,9}
    };
    int row = 3;
    int col = 3;
    cout << "The maximum number in the 2d array is "<<findMax(arr , row , col);
    cout << endl;
    cout << "The minimum number in the 2d array is "<< findMin(arr, row , col);
}