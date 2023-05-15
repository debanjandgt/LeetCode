class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) 
    {
        
        vector<ListNode*>ans; 
        
        while(head != NULL)
        {
            ans.push_back(head);
            head=head->next;
        }
        
        int n = ans.size();
        swap(ans[k-1]->val , ans[n-k]->val); 
        
        return ans[0];  
        
    }
};
