class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(auto x:nums){
           pq.push(x);
        }
        k--;
        while(k--){
            cout<<pq.top()<<" ";
            pq.pop();
        
        }
        return pq.top();
        
    }
};