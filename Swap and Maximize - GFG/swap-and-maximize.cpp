// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
   long long sum=0;
   int low=0,high=n-1;
   while(low<high){
       sum += abs(arr[high]-arr[low]) + abs(arr[high]-arr[low+1]);
       low++;
       high--;
   }
   sum += abs(arr[low]-arr[0]);
   return sum;
}