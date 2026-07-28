class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int x = 0;
        int y = 0;
        for(int num : nums){
            x+=num;
            while (num > 0) {
                y += num % 10;
                num /= 10;
            }
        }
        return abs(x-y);
    }
};