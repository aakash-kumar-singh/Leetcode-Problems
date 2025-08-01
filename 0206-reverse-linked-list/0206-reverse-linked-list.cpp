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
        ListNode* cur=head;
        ListNode* prevP=NULL;
        while(cur!=NULL){
            ListNode* nextP=cur->next;
            cur->next=prevP;
            prevP=cur;
            cur=nextP;
        }
        return prevP;
    }
};