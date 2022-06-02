class Solution {
public:
    
    void nextPermutation(vector<int>& a) {
       int n = a.size();
        if(n==1) return;
        int i;
        for(i = n-2; i>=0;i--){
            if(a[i]>=a[i+1]) continue;
            else break;
        }
        if(i<0){
            reverse(a.begin(),a.end());
            return;
        }
        int j = i+1;
        while(j<n && a[j]>a[i]){
            j++;
        }
        j--;
        swap(a[i],a[j]);
        reverse(a.begin()+(i+1),a.end());
        return;
       
    }
};