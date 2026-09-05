class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char> s;
        int sum = 0;
        for (char c : password) {
            if (!s.count(c)) {
                if (c >= '0' && c <= '9')
                    sum += 3;
                else if (c >= 'a' && c <= 'z')
                    sum += 1;
                else if (c >= 'A' && c <= 'Z')
                    sum += 2;
                else
                    sum += 5;
                s.insert(c);
            }
        }
        return sum;
    }
};