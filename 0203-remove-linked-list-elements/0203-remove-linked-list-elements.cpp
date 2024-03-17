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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        
        // Remove leading nodes with value equal to val
        while (curr != nullptr && curr->val == val) {
            head = curr->next;
            delete curr;
            curr = head;
        }
        
        // Traverse the rest of the list to remove nodes with value equal to val
        while (curr != nullptr) {
            if (curr->val == val) {
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        
        return head;
    }
};
