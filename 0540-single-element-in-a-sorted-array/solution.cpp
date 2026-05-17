class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      unordered_map<int , int> mp;
      for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
      }  
      for(pair<int ,int>p:mp){
        if(p.second == 1){
            return p.first;
        }
      }
      return -1;
    }
};
