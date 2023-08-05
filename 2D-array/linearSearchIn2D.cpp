#include<iostream>
using namespace std;
void findKey(int arr[][3] , int rows , int cols , int key) {
    for(int i = 0;i<rows ; i++) {
        for(int j = 0; j< cols ; j++) {
            if(arr[i][j] == key) {
                cout << "key found at " << i << " " << j << endl;
            }
        }
    }
}
int main() {
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3 ;
    int cols = 3;
    int key ;
    cout << "Please enter the key\n";
    cin >> key;
    findKey(arr , rows , cols , key) ;
}