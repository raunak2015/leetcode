class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    int vowelStrings(vector<string>& words, int left, int right) {

        int count = 0;

        for (int i = left; i <= right; i++) {

            string s = words[i];

            if (isVowel(s[0]) && isVowel(s[s.size() - 1])) {

                count++;
            }
        }

        return count;
    }
};