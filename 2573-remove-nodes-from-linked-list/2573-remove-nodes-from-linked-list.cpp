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
    ListNode* removeNodes(ListNode* head) {
        vector<ListNode*> st;
        ListNode* temp = head;
        while(temp!=nullptr){
            while(!st.empty() &&st.back()->val < temp->val){
                st.pop_back();
            }
            st.push_back(temp);
            temp = temp->next;
        }
        for(int i = 0; i<st.size()-1; i++){
            st[i]->next = st[i+1];
        }
        return st[0];
    }
};