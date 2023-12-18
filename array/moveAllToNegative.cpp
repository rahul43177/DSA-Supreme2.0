#include<iostream>
using namespace std;
void moveAllNegativeToLeft(int *a , int n) {
    //using 2 pointers here
    int low = 0;
    int high = n-1;
    while(low < high) {
        if(a[low] < 0) {
            low++;
        } else if(a[high] > 0) {
            high--;
        } else {
            swap(a[high] , a[low]);
        }
    }
    for(int i = 0;i<n;i++) {
        cout << a[i]<<" " ;
    } 
    cout << endl;
}
int main() {
    int a[] = {1,2,-3,4,-5,6};
    int n = sizeof(a)/sizeof(int);

    moveAllNegativeToLeft(a , n);
    return 0;
}