#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void sortColor(vector<int> &arr)
{
    int size = arr.size();
    int left = 0;
    int right = size - 1;
    int i = 0;
    while (i <= right)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[left]);
            left++;
            i++;
        }
        else if (arr[i] == 2)
        {
            swap(arr[i], arr[right]);
            right--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    vector<int> arr = {0, 0, 01, 2, 1, 2};
    sortColor(arr);
    print(arr);
}