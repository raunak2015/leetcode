class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<int> st(allowed.begin(), allowed.end());

        int count  = 0;

        for(string s : words){
            bool flage = true;
            for(char ch : s){
                if(!st.count(ch)){
                    flage = false;
                    break;
                }
            }
            if(flage){
                count++;
            }
        }
        return count;
    }
};