#include <bits/stdc++.h>
using namespace std;
#define ll long long


class Solution {

    void quickSort(vector<int>& arr, int low, int high)
    {
        if (low < high) {
            int pivot = partition(arr, low, high);
            quickSort(arr, low, pivot - 1);
            quickSort(arr, pivot + 1, high);
        }
    }

    int partition (vector<int>& arr, int low, int high)
    {
        int i = low;
        int j = high;
        int pivot = low;
        while (i < j) {
            while (i < j && arr[i] <= arr[pivot]) i++;
            while (arr[j] > arr[pivot]) j--;
            if (i < j) {
                swap(arr[i], arr[j]);
            }

        }
        swap(arr[pivot], arr[j]);
        return j;
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }
};

int main() {
    int n; cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    Solution ob;
    vector<int> res = ob.sortArray(nums);
    for (auto &it : res)
    {
        cout << it << ' ';
    }
    return 0;
}
