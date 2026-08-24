/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node == nullptr) return;
        if(node->next == nullptr){
            delete node;
            return;
        }
        ListNode* temp = node->next;
        node->next = temp->next;
        node->val = temp->val;
        delete temp;
    }
};
