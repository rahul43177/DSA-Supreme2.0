// //sort 0 and 1 and 2 ---> 

// #include<iostream>
// #include<vector>
// using namespace std;

// void sortColors(vector<int> &arr) {
//     int size = arr.size();
//     int zeroCount = 0;
//     int oneCount = 0;
//     int twoCount = 0;
//     for(int i = 0;i<size;i++) {
//         if(arr[i] == 0) {
//             zeroCount++ ;
//         } else if(arr[i] == 1) {
//             oneCount++ ;
//         } else {
//             twoCount++;
//         }
//     }
//     int i = 0;
//     while(zeroCount--) {
//         arr[i] = 0;
//         i++;
//     } while(oneCount--) {
//         arr[i] = 1;
//         i++;
//     } while(twoCount--) {
//         arr[i] = 2;
//         i++;
//     }
// }

// void printArray(vector<int> &arr) {
//     int n = arr.size();
//     for(int i = 0;i<n;i++) {
//         cout << arr[i] << " ";
//     }
// }

// int main() {
//     vector<int> arr = {0,1,2,0,0,2,1,2};
//     sortColors(arr);
//     printArray(arr);
// }


//doing using 3 pointers
#include<iostream>
#include<vector>
using namespace std;

void sortColor(vector<int> &arr) {
    int size = arr.size();
    int left = 0;
    int right = size - 1;
    int i = 0; //index

    while(i <= right) {
        if(arr[i] == 0) {
            swap(arr[i] , arr[left]);
            left ++ ;
            i++;
        } else if(arr[i] == 2) {
            swap(arr[i], arr[right]);
            right--;
        } else {
            i++;
        }
    }
}

void print(vector<int> &arr) {
    int n = arr.size();
    for(int i = 0;i<n;i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    vector<int> arr = {0, 1 , 0, 2 , 0, 2 , 1 , 0 , 1 ,2 ,2,1 ,0, 0, 0};
    sortColor(arr);
    print(arr);
}