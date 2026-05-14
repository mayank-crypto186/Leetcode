class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        int first=-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]>=target){
                high=mid-1;
                if(nums[mid]==target) first=mid;
            }else low=mid+1;
        }
        low=0,high=n-1;
        int second=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<=target){
                low=mid+1;
                if(nums[mid]==target) second = mid;
            }else{
                high=mid-1;
            }
        }
        return {first,second};
    }
};
