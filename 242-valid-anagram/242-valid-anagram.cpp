class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        map<char,int> mp1;
        map<char,int> mp2;
        for(int i = 0;i<s.size();i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        
        for(auto x:s){
            if(mp1[x]!=mp2[x]){
                return false;
            }
        }
        return true;
    }
};