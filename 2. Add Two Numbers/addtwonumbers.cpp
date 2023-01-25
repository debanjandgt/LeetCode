#include<bigint.h>
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string s1="";
        string s2="";
        ListNode* c1=l1;
        ListNode* c2=l2;
        while(c1!=NULL){
            int valu=c1->val;
            s1=to_string(valu)+s1;
            c1=c1->next;
        }
        while(c2!=NULL){
            s2=to_string(c2->val) + s2;
            c2=c2->next;
        }
        bigint v1((s1));
        bigint v2((s2));
        v1=v1+v2;
        ListNode* temp=new ListNode(v1%10);
        ListNode* copy=temp;
        v1/=10;
        while(v1>0){
            int a=v1%10;
            ListNode* x=new ListNode(a);
            temp->next=x;
            temp=temp->next;
            v1=v1/10;
        }
        return(copy);
    }
};
