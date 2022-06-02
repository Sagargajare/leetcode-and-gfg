// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        if(N==1){return arr;}
        int i;
        for(i = N-2;i>=0;i--){
            if(arr[i]>=arr[i+1]){continue;}else{break;}
        }
        if(i<0){
            reverse(arr.begin(),arr.end());
            return arr;
        }
        int j = i+1;
        while(j<N && arr[j]>arr[i]){
            j++;
        }
        j--;
        swap(arr[i],arr[j]);
        reverse(arr.begin()+(i+1),arr.end());
        return arr;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends