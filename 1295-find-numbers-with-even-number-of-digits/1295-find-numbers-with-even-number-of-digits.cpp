class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int temp : nums) {
            if ((temp >= 10 && temp <= 99) || (temp >= 1000 && temp <= 9999) ||
                temp == 100000)
                count++;
        }
        return count;
    }
};