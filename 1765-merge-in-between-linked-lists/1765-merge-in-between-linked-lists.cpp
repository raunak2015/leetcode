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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list2;
        ListNode* x = list1;

        for(int i = 0; i < a-1;i++){
            x=x->next;
        }
        ListNode* y = list1;
        for(int i = 0; i < b+1;i++){
            y=y->next;
        }
        while(temp->next!=nullptr){
            temp = temp->next;
        }
        x->next = list2;
        temp->next = y;
        return list1;
    }
};