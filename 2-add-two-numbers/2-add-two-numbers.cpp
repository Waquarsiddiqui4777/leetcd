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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry =0;
        ListNode* n = new ListNode(0);
        ListNode* head = n;
        while(l1 && l2){
            ListNode* nn = new ListNode();
            int v = (l1->val + l2->val + carry);
            nn->val = v%10;
            carry = v/10;
            n->next = nn;
            l1 = l1->next; l2 = l2->next;
            n = n->next;
        }
        while(l1){
            ListNode* nn = new ListNode();
            int v = (l1->val + carry);
            nn->val = v%10;
            carry = v/10;
            n->next = nn;
            l1 = l1->next;
            n = n->next;
        }
        
        while(l2){
            ListNode* nn = new ListNode();
            int v = (l2->val + carry);
            nn->val = v%10;
            carry = v/10;
            n->next = nn;
            l2 = l2->next;
            n = n->next;
        }
        while(carry!=0){
            ListNode* nn = new ListNode();
            int v = (carry);
            nn->val = v%10;
            carry = v/10;
            n->next = nn;
            n = n->next;
        }
        return head->next; 
    }
};