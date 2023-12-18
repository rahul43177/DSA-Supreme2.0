#include<iostream>
using namespace std;

int main() {
    int arr[3][3];
    int row = 3;
    int col = 3;
    for(int i =0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cout << "ENter the input for row index : "<< i << " " << "column index : " << j << " "; 
            cin >> arr[i][j];
        }
    }
    cout << "Printing the array : " << endl;
    for(int i =0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}