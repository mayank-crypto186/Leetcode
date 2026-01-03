class Solution {
public:
    int findMaxVal(int n, vector<vector<int>>& restrictions, vector<int>& diff) {
        const int INF = 1e9;
        vector<int> ub(n, INF);
        ub[0] = 0;

       
        for(auto &r : restrictions) {
            ub[r[0]] = min(ub[r[0]], r[1]);
        }

       
        for(int i = 1; i < n; i++) {
            ub[i] = min(ub[i], ub[i-1] + diff[i-1]);
        }

        
        for(int i = n-2; i >= 0; i--) {
            ub[i] = min(ub[i], ub[i+1] + diff[i]);
        }

       
        vector<int> maxVal(n, 0);
        maxVal[0] = 0;

        for(int i = 1; i < n; i++) {
            maxVal[i] = min(ub[i], maxVal[i-1] + diff[i-1]);
        }

       
        return *max_element(maxVal.begin(), maxVal.end());
    }
};
