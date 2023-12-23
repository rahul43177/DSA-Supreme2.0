//sort 0 and 1 and 2 ---> 

#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int> &arr) {
    int size = arr.size();
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    for(int i = 0;i<size;i++) {
        if(arr[i] == 0) {
            zeroCount++ ;
        } else if(arr[i] == 1) {
            oneCount++ ;
        } else {
            twoCount++;
        }
    }
    int i = 0;
    while(zeroCount--) {
        arr[i] = 0;
        i++;
    } while(oneCount--) {
        arr[i] = 1;
        i++;
    } while(twoCount--) {
        arr[i] = 2;
        i++;
    }
}

void printArray(vector<int> &arr) {
    int n = arr.size();
    for(int i = 0;i<n;i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    vector<int> arr = {0,1,2,0,0,2,1,2};
    sortColors(arr);
    printArray(arr);
}