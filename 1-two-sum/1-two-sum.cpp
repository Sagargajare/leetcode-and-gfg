class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> output;
        for(int i = 0;i<nums.size();i++){
            if(mp.find(target - nums[i]) != mp.end()){
                cout<<nums[i]<<" "<<(target - nums[i])<<" ";
                output.push_back(i);
                output.push_back(mp.find(target - nums[i])->second);
                return output;
            }else{
                mp[nums[i]]=i;
            }
        }
        return output;
    }
};