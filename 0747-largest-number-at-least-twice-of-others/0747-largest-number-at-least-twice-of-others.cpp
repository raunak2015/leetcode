class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        for (int num : nums) {
            if (num != maxi && num * 2 > maxi)
                return -1;
        }
        return find(nums.begin(), nums.end(), maxi)-nums.begin();
    }
};