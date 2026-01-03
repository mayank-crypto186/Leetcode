class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int n=nums.size();
        if(n == 0) return -1;
        int maxval = 0;
        for(int x : nums) if(x > maxval)maxval = x;
        std::vector<int>freq(maxval+1,0);
        int left=0;
        int minlen=INT_MAX;
        long long distinctSum=0;
        for(int right=0; right < nums.size(); ++right){
            if(freq[nums[right]] == 0){
                distinctSum+=nums[right];
            }
            freq[nums[right]]++;
            while(distinctSum>=k){
                minlen=std::min(minlen,right-left+1);
                freq[nums[left]]--;
                if(freq[nums[left]]==0){
                    distinctSum -= nums[left];
                }
                left++;
            }
        }
        return (minlen==INT_MAX)? -1:minlen;
    }
};
