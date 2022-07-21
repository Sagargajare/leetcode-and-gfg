class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        vector<vector<string>> arr;
        for(int i = 0;i<strs.size();i++){
            string tp = strs[i];
            sort(tp.begin(),tp.end());
            mp[tp].push_back(strs[i]);
        }
        for(auto x:mp){
            arr.push_back(x.second);
        }
        return arr;
    }
};