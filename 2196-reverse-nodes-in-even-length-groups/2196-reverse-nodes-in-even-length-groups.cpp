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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* prev =head;
        ListNode* curr = head->next;
        int gs = 2;
        while(curr != nullptr){
            ListNode* temp = curr;
            int count = 0;
            while(count<gs && temp != nullptr){
                count++;
                temp = temp->next;
            }
            if(count%2 == 0){
                ListNode* gp = temp;
                ListNode* gc = curr;
                for(int i = 0; i<count; i++){
                    ListNode* temp1 = gc->next;
                    gc->next = gp;
                    gp = gc;
                    gc = temp1;
                }
                prev->next = gp; 
                prev = curr;     
                curr = temp;
            }
            else{
                for(int i=0;i< count; i++){
                    prev = curr;
                    curr=curr->next;
                }
            }
            gs++;
        }
        return head;
    }
};