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



// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         vector<int> values;
//     ListNode* current = head;

//     while (current != nullptr) {
//         values.push_back(current->val);
//         current = current->next;
//     }

//     int left = 0;
//     int right = values.size() - 1;
//     while (left < right) {
//         if (values[left] != values[right]) {
//             return false; 
//         }
//         left++;
//         right--;
//     }

//     return true; 
//     }
// };



//  class Solution {
// public:
//     ListNode* temp;
    
//     bool check(ListNode* head) {
//         if (NULL == head) return true;
//         bool res = check(head->next) & (temp->val == head->val);
//         temp = temp->next;
//         return res;
//     }
    
//     bool isPalindrome(ListNode* head) {
//         temp = head;
//         return check(head);
//     }
// };

class Solution {
public:

    bool isPalindrome(ListNode* head) {
        stack<int>s;
        ListNode *temp=head;
        while(temp!=NULL){
            s.push(temp->val);
            temp=temp->next;
        }
        while(head!=NULL && !s.empty())
        {
            if(s.top()!=head->val) return false;
            head=head->next;
            s.pop();
        }
        return true;
    }
};