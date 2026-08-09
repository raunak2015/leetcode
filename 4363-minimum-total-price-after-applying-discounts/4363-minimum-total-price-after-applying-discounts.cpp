class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(), prices.end(), greater<int>());
        sort(discounts.begin(), discounts.end(), greater<int>());

        double ans = 0.0;
        int n = prices.size();
        int m = discounts.size();

        for (int i = 0; i < n; i++) {
            if (i < m) {
                double finalPrice = prices[i] * (100.0 - discounts[i]) / 100.0;
                ans+=finalPrice;
            } else {
                ans += prices[i];
            }
        }

        return ans;
    }
};
