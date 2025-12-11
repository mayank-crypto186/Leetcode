class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pur= prices[0];
        int sell = 0;
        for( int n : prices){
            if(n<pur){
                pur=n;
            }
            else if(n-pur > sell){
                sell=n-pur;;
            }
        }
        return sell;
    }
};
