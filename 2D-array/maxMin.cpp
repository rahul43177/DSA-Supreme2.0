#include <iostream>
#include <limits.h>
using namespace std;
    
int findMax(int arr[][3], int rows, int cols) {
    int max = INT_MIN;
    for(int i = 0;i<rows ; i++) {
        for(int j = 0; j< cols ; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}
int findMin(int arr[][3], int rows , int cols) {
    int min = INT_MAX;
    for(int i = 0;i<rows ; i++) {
        for(int j = 0; j< cols ; j++) {
            if(arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    return min;
}
int main() {
    int arr[3][3]{{1,2,3},{4,5,6},{7,8,9}};
    
    int rows = 3;
    int cols = 3;

    int max = INT_MIN;  
    int min = INT_MAX;
    cout << "Max NUmber in array "<<findMax(arr , rows , cols) << endl;
    cout << "Min number in array "<< findMin(arr , rows , cols) << endl;
}