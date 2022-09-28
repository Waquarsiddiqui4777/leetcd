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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int c=0;
        if(head==NULL) return 0;
                while(temp!=NULL){
                    c++;
          temp=temp->next;
                    }
        temp=head;
            if(c==n){
                return head->next;}
    int k=c-n;
        int l=1;
        while(temp!=NULL){
            if(l==k){
             temp->next=temp->next->next;   
            break;}
            temp=temp->next;
            l++;
        }return head;
    }
};