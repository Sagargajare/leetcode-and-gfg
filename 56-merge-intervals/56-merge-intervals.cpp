class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        stack<vector<int>> st;
        st.push(intervals[0]);
        vector<vector<int>> ans;
        for(int i = 1;i<intervals.size();++i){
            auto curr = intervals[i];
            auto prev = st.top();
            
            st.pop();
            if(curr[0] >= prev[0] && curr[0] <= prev[1]){
                auto merged = prev;
                merged[1] = max(prev[1],curr[1]);
                st.push(merged);
            }else{
                st.push(prev);
                st.push(curr);
            }
        }
        
        while(st.size()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};