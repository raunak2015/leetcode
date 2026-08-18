class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string temp = "";
        int ans = 0;
        for (char c : s) {
            int pos = temp.find(c);
            if (pos != string::npos) {
                temp.erase(0, pos + 1);
            }
            temp += c;
            ans = max(ans, (int)temp.size());
        }
        return ans;
    }
};