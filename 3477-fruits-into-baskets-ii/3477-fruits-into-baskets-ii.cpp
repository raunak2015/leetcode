class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        vector<int> used(n, false);
        int ans = 0;

        for (int i = 0; i < n; i++) {
            bool plased = false;

            for (int j = 0; j < n; j++) {
                if (!used[j] && baskets[j] >= fruits[i]) {
                    used[j] = true;
                    plased = true;
                    break;
                }
            }
            if (!plased)
                ans++;
        }
        return ans;
    }
};