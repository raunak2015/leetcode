class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int num : arr){
            mp[num]++;
        }
        unordered_set<int> s;
        for(auto n : mp ){
            if(s.count(n.second)){
                return false;
            }
            s.insert(n.second);
        }
        return true;

    }
};