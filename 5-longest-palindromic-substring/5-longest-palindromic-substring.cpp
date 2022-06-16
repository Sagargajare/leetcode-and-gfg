class Solution {
public:
    string longestPalindrome(string s) {
        string output = "";
        int outlen = 0;
        for(int i = 0;i<s.size();i++){
            int left = i;
            int right = i;
            
            while(left>=0 and right<s.size() and s[left]==s[right]){
                if((right - left +1)>outlen){
                    output = s.substr(left,right - left +1);
                    outlen = right - left +1;
                        
                }
                left -= 1;
                right +=1;
            }
            left = i;
            right = i+1;
            while(left>=0 and right<s.size() and s[left]==s[right]){
                if((right - left +1)>outlen){
                    output = s.substr(left,right - left +1);
                    outlen = right - left +1;
                        
                }
                left -= 1;
                right +=1;
            }
            
            
        }
        return output;
    }
};