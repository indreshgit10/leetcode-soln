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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        unordered_set<int> num(nums.begin(), nums.end());
        ListNode* dummy= new ListNode(0);
        dummy->next= head;
        ListNode* temp=dummy;
        ListNode* ptr= dummy->next;

        while(temp->next){
            if(num.find(temp->next->val)!= num.end()){
                temp->next= ptr->next;
                ptr=temp->next;

            }
            else{
                temp=temp->next;
            ptr=temp->next;
            }

        }
        return dummy->next;
        
    }
};