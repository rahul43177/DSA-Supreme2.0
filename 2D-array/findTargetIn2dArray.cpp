#include<iostream>
using namespace std;

bool ifTargetPresent(int arr[3][3] , int target) {
    int row = 3;
    int col = 3;
    for(int i =0;i<row;i++) {
        for(int j=0;j<col;j++) {
            if(arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[3][3] = {
        {1,2,3} , 
        {4,5,6} , 
        {7,8,9}
    };

    int target = 7;

    bool present = ifTargetPresent(arr , target);
    if(present) {
        cout << "Target found \n";
    } 
    if(!present) {
        cout << "Target not found \n";
    }
    
    
    return 0;
}