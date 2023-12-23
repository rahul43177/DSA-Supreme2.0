// // //Brute force approach with 2 loops 
// // #include<iostream>
// // #include<vector>
// // using namespace std;

// // vector<int> twoSum(vector<int> &arr , int target) {
// //     vector<int> ans(2);
// //     for(int i = 0;i<arr.size();i++) {
// //         for(int j = i;j<arr.size();j++) {
// //             if(arr[i] + arr[j] == target) {
// //                 ans[0] = i;
// //                 ans[1] = j;
// //             }
// //         }
// //     }
// //     return ans;
// // }

// // int main() {
// //     vector<int> arr = {3,2,4};
// //     int target = 6;
    
// //     vector<int> ans = twoSum(arr , target);
// //     for(int i = 0;i<ans.size();i++) {
// //         cout << ans[i] << " ";
// //     }

// // }

// //using 2 pointers 
// // #include<iostream>
// // #include<vector>
// // #include<algorithm>
// // using namespace std;

// // vector<int> twoSum(vector<int> &arr , int target) {
// //     //sort the array first 
// //     sort(arr.begin() , arr.end());
//     vector<int> ans(2);
//     int low = 0;
//     int high = arr.size() - 1;

//     while(low < high) {
//         int sum = arr[low] + arr[high];

//         if(sum == target) {
//             ans[0] = low;
//             ans[1] = high; 
//             break;
//         } else if(sum < target) {
//             low++;
//         } else {
//             high--;
//         }
//     }
//     return ans;

// }

// int main() {
//     vector<int> arr = {3,2,4};
//     int target = 6;

//     vector<int> ans = twoSum(arr , target);
//     for(int i = 0;i<ans.size();i++) {
//         cout << ans[i] << " ";
//     }
// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> twoSum(vector<int> &arr , int target) {
    vector<pair<int, int>> nums;
    for (int i = 0; i < arr.size(); i++) {
        nums.push_back({arr[i], i});
    }
    
    sort(nums.begin(), nums.end());
    
    vector<int> ans(2);
    int low = 0;
    int high = nums.size() - 1;

    while(low < high) {
        int sum = nums[low].first + nums[high].first;

        if(sum == target) {
            ans[0] = nums[low].second; //explain this line ?
            ans[1] = nums[high].second;
            break;
        } else if(sum < target) {
            low++;
        } else {
            high--;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {3,2,4};
    int target = 6;

    vector<int> ans = twoSum(arr , target);
    for(int i = 0;i<ans.size();i++) {
        cout << ans[i] << " ";
    }
    return 0;
}