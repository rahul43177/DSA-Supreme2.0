/**
 Find square root of a number using binary search - find integer part right now 
**/

#include<iostream>
using namespace std;

int findSqrt(int n){
    int target = n;
    int s =0;
    int e = n;
    int mid = s+ (e-s)/2;
    int ans = -1;
    while(s<e) {
        if(mid*mid == target) {
            return mid;
        } else if(mid * mid > target) {
            //left search
            e = mid-1;
        } else if(target > mid*mid) {
            ans = mid;
            //right search now 
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {
    int n;
    cout<<"PLease enter the number whose square you want to know \n";
    cin >> n;


    int ans = findSqrt(n);
    cout << "The ans is "<<ans<<endl;
    int precision;
    cout << "enter the precise floating digit \n";
    cin >> precision;

    double step = 0.1;
    for(int i = 0;i<precision;i++) {
       for(double j = ans;j*j<n;j = j+step) {
        ans = j;
        
       } 
    }
}

 
