// #include<iostream>
// #include<vector>
// using namespace std;

// bool linearSearch(vector<int> &arr , int target) {
//     int size = arr.size();
//     for(int i = 0;i<size;i++) {
//         if(arr[i] == target) {
//             return true;
//         }
//     }
//     return false;
// }


// int main() {
//     vector<int> arr = {1,2,3,4,5,6,7};
//     int target = 5;

//     bool result = linearSearch(arr, target);
//     if(result == true) cout << "Found";
//     else cout << "not found";
// }


#include<iostream>
#include<vector>
using namespace std;


string linearSearch(vector<int> arr , int target) {
    int n = arr.size();
    for(int i = 0;i<n;i++) {
        if(arr[i] == target) {
            return "The element is present in the array at index " + to_string(i);
        }
    }
    return "The element is not present in the array";
}

int main() {

vector<int> arr= {1,2,3,4,5,6,7};
int target = 11;

string result = linearSearch(arr , target);
cout << result;
}