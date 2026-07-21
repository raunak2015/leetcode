class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int n : arr){
            mp[n]++;
        }
        int high = -1;
        for(auto n : mp){
            if (n.first == n.second) {
                high = max(high, n.first);
            }
        }
        return high;
    }
};