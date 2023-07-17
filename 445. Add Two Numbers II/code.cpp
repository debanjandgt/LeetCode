class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1,s2;
        while(l1 != NULL)
        {
            s1.push(l1->val);
            l1=l1->next;
        }
        while(l2 != NULL)
        {
            s2.push(l2->val);
            l2=l2->next;
        }
         ListNode* result=NULL;
         int sum=0,carry=0;
        while(!s1.empty() || !s2.empty() || carry >= 1)
        {
           
            int v1=0,v2=0;
            if(!s1.empty())
            {
                v1=s1.top();
                s1.pop();
            }
            if(!s2.empty())
            {
                v2=s2.top();
                s2.pop();
            }
            sum=(v1+v2+carry)%10;
            carry=(v1+v2+carry)/10;
            ListNode* temp=new ListNode(sum);
            temp->next=result;
            result=temp;
        }
        return result;
    }
};
