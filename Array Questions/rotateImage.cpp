#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateMatrix(vector<vector<int>> &mat) {
    int row = mat.size();
    //transpose 
    for(int i = 0;i<row;i++) {
        int col = mat[i].size();
        for(int j = 1;j<col;j++){
            swap(mat[i][j] , mat[j][i]);
        }
    }
    //reverse all the rows 
    for(int i = 0;i<row;i++) {
        reverse(mat[i].begin() , mat[i].end());
    }
}

void printArr(vector<vector<int>> mat) {
    for(int i = 0;i<mat.size();i++) {
        for(int j = 0;j<mat[i].size();j++) {
            cout << mat[i][j] << " ";
        }
    }
}

int main() {
    vector<vector<int>> mat = {
      {1,2,3} ,
      {4,5,6} , 
      {7,8,9}  
    };

    //rotate the array by 90 degree

    rotateMatrix(mat);
    printArr(mat);

}