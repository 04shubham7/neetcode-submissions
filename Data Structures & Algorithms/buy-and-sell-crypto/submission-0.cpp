class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;

        int minPrice = prices[0];   // lowest price seen so far
        int maxProfit = 0;          // maximum profit

        for (int i = 1; i < n; i++) {
            // update maxProfit if selling today gives better profit
            maxProfit = max(maxProfit, prices[i] - minPrice);

            // update minPrice if today’s price is lower
            minPrice = min(minPrice, prices[i]);
        }

        return maxProfit;
    }
};