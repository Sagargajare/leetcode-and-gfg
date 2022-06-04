class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();
        if(n==1){
            return 1;
        }
        for(auto x: nums){
            if(mp.find(x) != mp.end() && mp[x] >=n/2 ){
                return x;
            }else{
                mp[x]++;
            }
        }
        return -1;
    }
};