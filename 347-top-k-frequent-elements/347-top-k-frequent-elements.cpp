class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> arr;
        for(auto x:nums){
            mp[x]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto x:mp){
            pq.push({x.second,x.first});
        }
        while(k-- && pq.empty() == false){
            arr.push_back(pq.top().second);
            pq.pop();
        }
        return arr;
        
    }
};