// key pair - question on gfg
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool keyPair(vector<int> &arr, int target)
{
    int size = arr.size();
    // we will use two pointer approach
    // we will sort it for that
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            return true;
        }
        else if (sum > target)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 30;

    bool result = keyPair(arr, target);
    if (result)
        cout << "We found the pair";
    else
        cout << "Did not find the pair";
    return 0;
}