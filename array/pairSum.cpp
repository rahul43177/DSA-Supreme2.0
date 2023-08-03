#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Please enter the size of array \n";
    cin >> n;
    vector<int> arr(n);
    cout << "Please enter the elements of array \n";

    for(int i = 0;i<n;i++) {
        cin >> arr[i];
    }

    int sumOfPair;
    cout << "Please enter the sum of pair you wanna find \n";
    cin >> sumOfPair;
    for(int i = 0; i< arr.size();i++) {
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+ arr[j] == sumOfPair){
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }



    return 0;
}