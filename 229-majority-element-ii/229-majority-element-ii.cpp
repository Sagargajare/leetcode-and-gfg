class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();
        vector<int> output;
        if(n==1){
            output.push_back(nums[0]);
            return output;
            
        }
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x: mp){
            if(x.second > n/3){
                output.push_back(x.first);
            }
        }
        return output;
    }
};