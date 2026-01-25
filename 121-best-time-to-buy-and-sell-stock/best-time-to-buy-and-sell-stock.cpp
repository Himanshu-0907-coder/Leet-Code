class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minProfit = prices[0];
        int maxProfit = 0;

        for(int i=1;i<prices.size();i++){
            if(minProfit>prices[i]){
                minProfit = prices[i];
            }
            else{
                maxProfit = max(maxProfit,prices[i]-minProfit);
            }
        }
        return maxProfit;
    }
};