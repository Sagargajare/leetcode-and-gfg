class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(auto x:nums){
            if(mp.find(x) != mp.end()){
                return x;
            }else{
                mp[x]++;
            }
            
        }
        return -1;
    }
};