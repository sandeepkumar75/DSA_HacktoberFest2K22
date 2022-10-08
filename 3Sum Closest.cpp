
#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int threeSumClosest(vector<int>& nums, int t) {
        int n=nums.size(), mini=INT_MAX, res=0;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<n-2;i++){
            int l=i+1, r=n-1;
            
            while(l<r){
                int sum = nums[i] + nums[l] + nums[r];
                
                if(sum==t) return sum;
                
                if(abs(t-sum)<mini){
                    res = sum;
                    mini = abs(t-sum);
                }
                
                if(sum > t) r--;
                else l++;
            }
            
        }
        
        return res;
    }

int main()
{
    int n, t;
    cin >> n;
    vector<int> nums(n, 0);
    
    for(int i=0;i<n;i++)
        cin >> nums[i];
        
    cin >> t;
    
    int res = threeSumClosest(nums, t);
    
    cout << res;

    return 0;
}
