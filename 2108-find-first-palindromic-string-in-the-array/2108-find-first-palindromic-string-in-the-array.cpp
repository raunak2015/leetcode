class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string temp : words){
            string rev = temp;
            reverse(temp.begin(), temp.end());
            if(temp == rev){
                return temp;
            }
        }
        return "";
    }
};