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
    ListNode* sortList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        vector<int> nums;
        ListNode* temp=head;
        while(temp->next!=NULL){
            nums.push_back(temp->val);
            temp=temp->next;
        }
        nums.push_back(temp->val);
        sort(nums.begin(),nums.end());
        ListNode* ptr=head;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            head->val=nums[i];
            head=head->next;
        }
        head->val=nums[n-1];
        head->next=NULL;
        head=ptr;
        return head;


    }
};