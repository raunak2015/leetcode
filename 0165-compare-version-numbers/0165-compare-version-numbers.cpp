class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<string> m;
        vector<string> n;
        string temp = "";
        for (int i = 0; i < version1.size(); i++) {
            if (version1[i] == '.') {
                m.push_back(temp);
                temp = "";
            } else {
                temp += version1[i];
            }
        }
        m.push_back(temp);
        temp = "";

        for (int i = 0; i < version2.size(); i++) {
            if (version2[i] == '.') {
                n.push_back(temp);
                temp = "";
            } else {
                temp += version2[i];
            }
        }
        n.push_back(temp);
        
        int sz = max(m.size(), n.size());
        for (int i = 0; i < sz; i++) {
            int v1, v2;
            if(i<m.size()){
                v1 = stoi(m[i]);
            }
            else{
                v1 = 0;
            }
            if(i<n.size()){
                v2 = stoi(n[i]);
            }
            else{
                 v2 = 0;
            }

            if (v1 < v2) return -1;
            if (v1 > v2) return 1;
        }
        return 0;
    }
};