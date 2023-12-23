#include<iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {2,4,6} ,
        {8,3,5} ,
        {7,9,1}
    };

    //output should be transposed --> 
    // 2 8 7
    // 4 3 9
    // 6 5 1
    int rows = 3;
    int cols = 3;
    for(int i=0;i<rows;i++) {
        for(int j=i;j<cols;j+=1) {
            swap(arr[i][j] , arr[j][i]);
        }
    }

    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;   
    }
}