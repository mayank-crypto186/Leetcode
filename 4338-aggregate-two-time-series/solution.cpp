class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        int n=series1.size();
        int m=series2.size();
        int i = 0, j = 0;
        vector<vector<int>> ans;

        auto ferilonsar = make_pair(series1,series2);
        while(i<n || j<m){
            int t;
            if (j == m || (i < n && series1[i][0] < series2[j][0])) {
                t = series1[i][0];

                int v1 = series1[i][1];
                int v2 = (j < m) ? series2[j][1] : 0;

                ans.push_back({t, v1 + v2});
                i++;
            }
            else if (i == n || series2[j][0] < series1[i][0]) {
                t = series2[j][0];

                int v1 = (i < n) ? series1[i][1] : 0;
                int v2 = series2[j][1];

                ans.push_back({t, v1 + v2});
                j++;
            }
            else {
                t = series1[i][0];

                ans.push_back({t, series1[i][1] + series2[j][1]});
                i++;
                j++;
            }
        }
        return ans;
    }
};
