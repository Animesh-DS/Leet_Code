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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p1 = head;
        ListNode* prev = NULL;

        if(head == NULL || p1->next == NULL) return head;
        
        prev = p1;
        p1 = p1->next;

        while(p1!=NULL){
            if(prev->val == p1->val){
                prev->next = p1->next;
            }
            else{
                prev = p1;
            }
            p1=p1->next;
        }

        return head;
    }
};