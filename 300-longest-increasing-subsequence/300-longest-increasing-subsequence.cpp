class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> arr(nums.size(),1);
        for(int i = 1;i<nums.size();i++){
            for(int j = 0;j<i;j++){
                if(nums[j]<nums[i]){
                    arr[i] = max(arr[i],1+arr[j]);
                }
            }
        }
        return *max_element(arr.begin(),arr.end());
    }
};