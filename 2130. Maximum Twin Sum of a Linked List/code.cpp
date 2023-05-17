class Solution {
public:
    int pairSum(ListNode* head) {
        int max1=INT_MIN , max2=INT_MIN;
        vector<int> v;
        ListNode* temp=head;
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        int i=0,j=v.size()-1;
        int maxi=INT_MIN;
        while(i<j)
        {
            int v1=v[i]+v[j];
            maxi=max(maxi,v1);
            i++;
            j--;
        }
        return maxi;
    }
};
