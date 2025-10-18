
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        int n =0;
        ListNode* temp= head;
        while( temp-> next != nullptr   ){
            temp=temp -> next;
            n++;
        }
        n++;
        k=k%n;

        if(k==0) return head;
        int m= n-k;

        temp-> next = head;

    
        
        temp= head;
        while(--m){
            temp=temp-> next;
        
        }
        head=temp-> next;
        temp->next = nullptr;

        return head;
        
    }
};