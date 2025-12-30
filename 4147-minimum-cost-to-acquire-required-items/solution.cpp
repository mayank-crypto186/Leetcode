class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans = LLONG_MAX;
        ans = min(ans,1LL * need1 * cost1 + 1LL * need2 * cost2);
        int both= min(need1,need2);
        long long ops1=1LL * both * costBoth+ 1LL * (need1-both) * cost1+ 1LL * (need2-both) * cost2;
        ans= min(ans, ops1);

        int maxBoth = max(need1,need2);
        long long ops2=1LL * maxBoth * costBoth;
        ans= min(ans , ops2);
        
        return ans;
    }
};
