class Solution {
public:
    string reversePrefix(string s, int k) {
        if(k<=0 || k>s.length()){
            return s;
        }
        std::reverse(s.begin(),s.begin()+k);
        return s;
    }
};
