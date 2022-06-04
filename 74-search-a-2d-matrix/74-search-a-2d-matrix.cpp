class Solution {
public:
    bool binarySearch(vector<int> arr,int l,int r,int target){
        if(r>=l){
            int mid = l + (r-l)/2;
            if(arr[mid] == target){
                return true;
            }
            
            if(arr[mid]<target){
                return binarySearch(arr,mid+1,r,target);
            }
            return binarySearch(arr,l,mid-1,target);
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> arr;
        for(auto x:matrix){
            arr.insert( arr.end(), x.begin(), x.end() );
        }
        return binarySearch(arr,0,arr.size()-1,target);
    }
};