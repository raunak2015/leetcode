class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mini = nums[0];
        for (int num : nums) {
            if (abs(num) < abs(mini))
                mini = num;
            else if (abs(num) == abs(mini) && num > mini)
                mini = num;
        }
        return mini;
    }
};