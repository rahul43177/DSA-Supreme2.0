// #include<iostream>
// #include<vector>
// using namespace std;

// int binarySearch(vector<int> arr , int key) {
//     int start = 0;
//     int end = 0;
//     int mid = start + (end-start)/2;

//     while(start <= end) {
//         if(arr[mid] == key) {
//             return mid;
//         } else if(key < arr[mid]) {
//             end = mid - 1;
//         } else {
//             start = mid+1;
//         }
//         mid = start + (end-start)/2;
//     }
//     return -1;
// }


// int main(){
//     int n;
//     cout << "Please enter the size of the array: \n";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Please enter the elements into the array \n";
//     for(int i = 0;i<n;i++) {
//         cin >> arr[i];
//     }

//     int key ;
//     cout << "Please enter the target \n";
//     cin >> key;
//     int index = binarySearch(arr , key);

//     if(index != -1 ) {
//         cout << "THe element is at index " << index << "\n"; 
//     } else {
//         cout << "The element is not there ";
//     }
// }

#include<iostream>
#include<vector>
using namespace std;
int findIndexOfArray(vector<int> arr , int target) {
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2;

    while(mid <= end) {
        if(arr[mid] == target) {
            return mid;
        } else if(target < arr[mid]) {
            //left search
            end = mid-1;
        } else {
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main() {
    int n;
    cout << "Please enter the size of the array \n";
    cin >> n;
    vector<int> arr(n);
    cout << "Please enter the elements into the array \n";
    for(int i = 0;i<n;i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Please enter the target which you want to find \n";
    cin >> target;

    int index = findIndexOfArray(arr, target);

    if(index != -1) {
        cout << "The element is there at the index " << index<< endl;
    } else {
        cout << "The element is not present in the array \n";
    }

}