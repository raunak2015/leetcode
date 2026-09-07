class Solution {
public:
    int distinctSubseqII(string s) {
        const long long MOD = 1e9 + 7;
        vector<int> last(26, 0);
        int n = s.length();
        int dp = 0;
        for(char c:s){
            int idx = c-'a';
            int newDp = (2 * dp + 1 - last[idx] + MOD) % MOD;
            last[idx] = (dp + 1) % MOD;
            dp = newDp;
        }
        return dp;
    }
};