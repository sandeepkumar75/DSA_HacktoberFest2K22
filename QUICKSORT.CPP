#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

class Solution
{
    public:
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low < high){
            int mid = partition(arr, low, high);
        
            quickSort(arr, low, mid-1);
            quickSort(arr, mid+1, high);
            
            return;
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       if(low == high)
        return low;
        
        int p = arr[low];
        int i = low;
        
        for(int j=low+1; j<=high; j++){
            if(arr[j] <= p){
                i++;
                swap(arr[i] , arr[j]);
            }
        }
        
        swap(arr[i],arr[low]);
        return i;
    }
};

int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
