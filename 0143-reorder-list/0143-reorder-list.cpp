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
    void reorderList(ListNode* head) {
        stack<ListNode*> st;
        if(head==NULL) return;
        else if(head->next==NULL) return;
        int size = 0;
        ListNode* sizer = head;
        while(sizer!=NULL){
            size++;
            sizer=sizer->next;
        }
        ListNode* curr = head;
        int currsize=0;
        while(currsize!=size/2){
            currsize++;
            curr=curr->next;
        }
        curr=curr->next;
        while(curr!=NULL){
            st.push(curr);
            curr=curr->next;
        }
        
        curr = head;
        sizer = head->next;
        while(!st.empty()){
            curr->next = st.top();
            st.top()->next = sizer;
            curr = sizer;
            sizer=sizer->next;
            st.pop();
        }
        if(size%2==0){
            sizer->next=NULL;
        }
        else if(size%2!=0){
            curr->next=NULL;
        }

        return;
    }
};