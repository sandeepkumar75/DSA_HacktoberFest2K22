#include <bits/stdc++.h>
using namespace std;
void productArray(int arr[], int n)
{

	// Base case
	if (n == 1) {
		cout << 0;
		return;
	}

	int i, temp = 1;
	int* prod = new int[(sizeof(int) * n)];
	memset(prod, 1, n);

	/* In this loop, temp variable contains product of
	elements on left side excluding arr[i] */
	for (i = 0; i < n; i++) {
		prod[i] = temp;
		temp *= arr[i];
	}

	temp = 1;

	/* In this loop, temp variable contains product of
	elements on right side excluding arr[i] */
	for (i = n - 1; i >= 0; i--) {
		prod[i] *= temp;
		temp *= arr[i];
	}
	for (i = 0; i < n; i++)
		cout << prod[i] << " ";

	return;
}

int main()
{
	int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elemmts"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	cout << "The product array is: \n";
	productArray(arr, n);
}

