/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        stack<pair<int,int>> st;
        ListNode* temp = head;
        int index = 0;
        while(temp!=nullptr){
            int value = temp->val;
            ans.push_back(0);

            while(!st.empty() && st.top().first < value){
                int pIndex = st.top().second;
                st.pop();
                ans[pIndex] = value;
            }
            st.push({value, index});
            index++;
            temp = temp->next;
        }
        return ans;
    }
};