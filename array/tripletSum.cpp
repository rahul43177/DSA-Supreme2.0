#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Please enter the size of the array \n";
    cin >> n;

    vector<int> arr(n);
    cout << "Please enter the elements inside the array \n";
    for(int i = 0;i<n;i++) 
    {
        cin >> arr[i];
    }

    cout << "Please enter the sum of triplet you wanna find \n";
    int tripSum ;
    cin >> tripSum;

    for(int i = 0;i<arr.size();i++) {
        for(int j = i+1;j<arr.size();j++) {
            for(int k = j+1;k<arr.size();k++) {
                if(arr[i] + arr[j] + arr[k] == tripSum) {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        } 
    }
    return 0;
}