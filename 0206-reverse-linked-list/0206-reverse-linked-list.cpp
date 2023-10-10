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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr or head->next==nullptr)
            return head;
        
        ListNode* first = nullptr,*second = head, *third;
        
        while(second!= nullptr){
          third = second->next;
            second->next = first;
            first = second;
            second = third;
        }
        
        head= first;
        return head;
    }
};