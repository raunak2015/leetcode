class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> mp;
        for(int num : nums){
            if(num %2 ==0)
            mp[num]++;
        }
        int ans = -1;
        int maxFreq = 0;
        for(auto n : mp){
            if (n.second > maxFreq) {
                maxFreq = n.second;
                ans = n.first;
            }
        }
        return ans;
    }
};