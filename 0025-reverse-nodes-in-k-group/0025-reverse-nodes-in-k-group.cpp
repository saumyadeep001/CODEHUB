// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;
        
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode *prevGroupEnd = dummy;
        ListNode *groupStart = head;
        
        while (true) {
            ListNode *node = groupStart;
            int count = 0;
            while (node && count < k) {
                node = node->next;
                count++;
            }
            

            if (count < k) break;
            
            ListNode *prev = nullptr, *curr = groupStart;
            for (int i = 0; i < k; i++) {
                ListNode *next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            
            prevGroupEnd->next = prev;
            groupStart->next = curr;
            
            prevGroupEnd = groupStart;
            groupStart = curr;
        }
        
        return dummy->next;
    }
};
