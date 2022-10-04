
#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int lengthOfLIS(vector<int>& nums) {
        vector<int> lis;
        lis.push_back(nums[0]);
        
        for(int i=1;i<nums.size();i++){
            
            if(lis.back() < nums[i])
                lis.push_back(nums[i]);
            
            else{
                int it = lower_bound(lis.begin(), lis.end(), nums[i]) - lis.begin();
                lis[it] = nums[i];
            }
            
        }
        
        return lis.size();
    }

int main()
{

    int n;
    cin >> n;
    vector<int> nums(n, 0);
    
    for(int i=0;i<n;i++)
        cin >> nums[i];
        
    int r = lengthOfLIS(nums);
    
    cout << r;

    return 0;
}
