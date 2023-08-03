// Find unique element in an array 
/* 
Every element occurs twice except one 
find the unique element
Important question
*/

#include<iostream>
#include<vector>
using namespace std;

int findUniqueElement(vector<int> arr) {
    int ans = 0;
    for(int i = 0;i<arr.size();i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {

    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of array" << endl;

    for(int i = 0;i <arr.size();i++) {
        cin >> arr[i];
    }
    int uniqueElement = findUniqueElement(arr);

    cout << "unique element is " << uniqueElement << endl;

    return 0;
}