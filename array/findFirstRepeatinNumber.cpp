#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Please enter the size of the array \n";
    cin >> n;

    cout << "Please enter the elements into the array \n";
    vector <int> arr(n);
    for(int i = 0;i<n;i++) {
        cin >> arr[i];
    }


    //adding all the integers of the array
    int sum = 0;
    for(int i  = 0;i < arr.size();i++) {
        sum += arr[i];
    }

    cout << "The sum of the all elements of the array is " << sum << endl;
}

