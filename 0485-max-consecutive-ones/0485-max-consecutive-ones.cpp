class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int size =0;
        int low = 0;
        int high = 0;

        while(high<nums.size()){
            if (nums[high] == 0) {
                low = high + 1;
            } else {
                size = max(size, high - low + 1);
            }
            high++;
        }
        return size;
    }
};