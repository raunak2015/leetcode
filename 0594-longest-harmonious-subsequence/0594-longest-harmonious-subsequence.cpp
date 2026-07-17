class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int, int> mp;
        int ans = 0;
        for(int num : nums){
            mp[num]++;
        }
        for(auto n : mp){
            if(mp.count(n.first + 1)){
                int temp = n.second + mp[n.first + 1];
                ans = max(ans, temp);
            }
        }
        return ans;
    }
};