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
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
           int len1=m-l+1;
           int len2=r-m;
           
           int first[len1];
           int second[len2];
           
           int k=l;
           
           for(int i=0;i<len1;i++){
               first[i]=arr[k++];
           }
           
           k=m+1;
           
           for(int i=0;i<len2;i++){
               second[i]=arr[k++];
           }
           
           k=l;
           
           int index1=0;
           int index2=0;
          
          
           while(index1<len1 && index2<len2){
               if(first[index1]<second[index2]){
                   arr[k++]=first[index1++];
               }
               
               else
               arr[k++]=second[index2++];
           }
           
           while(index1<len1){
                 arr[k++]=first[index1++];
           }
           
           while(index2<len2){
            arr[k++]=second[index2++];
       }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
         if(l>=r)
         {
            return ;
         }
         int mid=(l+r)/2;
         mergeSort(arr,l,mid);
         mergeSort(arr,mid+1,r);
         
         merge(arr,l,mid,r);
    }
};

int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
