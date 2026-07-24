class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string sp = "";
        for (string sub : words) {
            sp += sub;

            if (sp.size() == s.size())
                return sp == s;
            ;
            if (sp.size() > s.size())
                return false;
        }
        return false;
    };
};