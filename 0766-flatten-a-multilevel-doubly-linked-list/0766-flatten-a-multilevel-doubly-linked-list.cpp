class Solution {
public:
    Node* flatten(Node* head) {
        if (head == nullptr) {
            return head;
        }

        stack<Node*> st;
        Node* curr = head;

        while (curr != nullptr) {

            if (curr->child != nullptr) {

                if (curr->next != nullptr) {
                    st.push(curr->next);
                }

                curr->next = curr->child;
                curr->child->prev = curr;
                curr->child = nullptr;
            }

            if (curr->next == nullptr && !st.empty()) {
                curr->next = st.top();
                st.pop();

                curr->next->prev = curr;
            }

            curr = curr->next;
        }

        return head;
    }
};