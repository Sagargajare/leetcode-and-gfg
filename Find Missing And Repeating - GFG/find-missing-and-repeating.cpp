// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
       map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(int i=1;i<=n;i++){
        m[i]--;
    }
     int *ans=new int(2);
    for(auto it=m.begin();it!=m.end();it++){
        if(it->second<0){
            ans[1]=it->first;
        }
        if(it->second==1){
            ans[0]=it->first;
        }
    }
    return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends