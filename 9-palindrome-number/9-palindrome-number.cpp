class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string st = to_string(x);
        string sbc = st;
        reverse(st.begin(),st.end());
        
        if(st == sbc){
            return true;
        }
        return false;
    }
};