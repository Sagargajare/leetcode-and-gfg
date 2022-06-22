class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
//         priority_queue<int,vector<int>,greater<int>> pq;
//         for(auto x:nums){
           
//         }
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];
    }
};