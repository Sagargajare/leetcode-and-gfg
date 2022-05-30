class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output;
        vector<int> a ={1};
        output.push_back(a);
        if(numRows==1){
            return output;
        }
        vector<int> b ={1,1};
        output.push_back(b);
        if(numRows == 2){
            return output;
        }
        for(int i = 2;i<numRows;i++){
            vector<int> temp;
            temp.push_back(1);
            
            vector<int> prev = output[i-1];
            for(int k = 0;k<prev.size()-1;k++){
                temp.push_back(prev[k]+prev[k+1]);
            }
            
            
            
            temp.push_back(1);
            output.push_back(temp);
            
        }
        return output;
    }
};