#include<iostream>
using namespace std;

void rowWiseSum(int arr[3][3] , int rows , int cols) {
    for(int i =0;i<rows;i++) {
        int sum = 0;
        for(int j = 0;j<cols;j++) {
            sum += arr[i][j];
        }
        cout << "sum is "<<sum << endl;
    }
}

int main() {
    int arr[3][3] = {
        {1,2,3} ,
        {4,5,6} ,   
        {7,8,9}
    };

    int rows = 3;
    int cols = 3;

    rowWiseSum(arr, rows , cols);
}