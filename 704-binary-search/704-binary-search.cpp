class Solution {
public:
    int binarySearch(vector<int> nums, int left,int right,int x){
        if(right>=left){
            int mid = left + (right-left)/2;
            
            if(nums[mid] == x){
                return mid;
            }
            
            if(nums[mid]>x){
                return binarySearch(nums,left,mid-1,x);
            }
            return binarySearch(nums,mid+1,right,x);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return binarySearch(nums,0,nums.size()-1,target);
    }
};