class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        
        int len = num.length();
        int halfLen = len / 2;
        
        for(int i = 0; i < halfLen; i++) {
            if(num[i] != num[len - i - 1])
                return false;
        }
        
        return true;
    }
};