class Solution {
public:
    string simplifyPath(string path) {

        vector<string> st;
        string temp = "";
        string result;

        for (int i = 0; i < path.size(); i++) {

            if (path[i] == '/') {

                if (temp == "." || temp == "") {
                }
                else if (temp == "..") {

                    if (!st.empty()) {
                        st.pop_back();
                    }
                }
                else {
                    st.push_back(temp);
                }

                temp = "";
            }
            else {
                temp += path[i];
            }
        }

        if (temp == "..") {
            if (!st.empty()) st.pop_back();
        }
        else if (temp != "" && temp != ".") {
            st.push_back(temp);
        }

        for (string dir : st) {
            result += "/" + dir;
        }

        return result.empty() ? "/" : result;
    }
};