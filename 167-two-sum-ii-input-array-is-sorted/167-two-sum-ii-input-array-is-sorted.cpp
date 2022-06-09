class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low = 0;
        int high = numbers.size()-1;
        vector<int> output;
        while(low<numbers.size()){
            int sum = numbers[low] + numbers[high];
            if(target == sum){
                return {low+1,high+1};
            }else
            if(sum>target){
                high--;
            }else{
                low++;
            }
        }
        return output;
    }
};