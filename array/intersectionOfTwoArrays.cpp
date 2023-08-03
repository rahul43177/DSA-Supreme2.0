/*
Intersection of two arrays
a={1,2,3,4,6,8}
b={3,4,9,10}

here 3 and 4 are common and the 
ans is {3,4}
*/

#include<iostream>
#include <vector>
using namespace  std;
int main() {
    vector<int> arr{1,2,3,4,5};
    vector<int> brr{3,4,49,10};

    vector<int> ans;
    for(int i = 0;i<arr.size();i++) {
        int element = arr[i];
        for(int j = 0;j<brr.size();j++) {
            if(element == brr[j]) {
                ans.push_back(element);
                brr[i] = -1; //marking
            }
        }
    }
    //printing answer
    for(auto value: ans) {
        cout << value << " ";
    }
    
}