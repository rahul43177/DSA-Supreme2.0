/*
*Union of two arrays
*a[] => {1,2,3,4,5} 
*b[] => {6,7,8}
*Union of two arrays is {1,2,3,4,5,6,7,8}
algo
*create an array / vector
*put all elements of a[] into ans array 
*put all elements of b[] into ans array
*done*
*/

#include<iostream>
#include<vector>
using namespace std;
int main() {
    //union
    int arr[] = {1,2,3,4,5};
    int sizea = 5;
    int brr[] = {6,7,8,9};
    int sizeb = 4;
    vector <int> ans;
    //push all elements of vector arr

    for(int i = 0; i<sizea;i++) {
        ans.push_back(arr[i]);
    }

    for(int i = 0;i<sizeb;i++) {
        ans.push_back(brr[i]);
    }
    for(int i = 0;i<ans.size();i++) {
        cout << ans[i] << " ";
    }







    return 0;
}