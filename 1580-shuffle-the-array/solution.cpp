class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> c;
        int i = 0;
        while(i < n){
            c.push_back(nums[i]);
            c.push_back(nums[n+i]);
            i++;
        }
        return c;
    }
};
