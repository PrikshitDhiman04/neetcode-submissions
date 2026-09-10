class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxVal = 0, bestBuy = prices[0];

        for(int i = 0; i<prices.size(); i++){
            if(prices[i] > bestBuy){
                maxVal = max(maxVal, prices[i] - bestBuy);
            }

            bestBuy = min(bestBuy, prices[i]);

        }
        return maxVal;
    }
};
