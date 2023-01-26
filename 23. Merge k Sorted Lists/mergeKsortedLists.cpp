class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;
        for(auto i:lists){
            while(i != NULL){
                v.push_back( i -> val);
                i= i -> next;
            }
        }
        if(v.size()==0)
        return NULL;
        sort(v.begin(),v.end());
        ListNode* newList =new ListNode(v[0]);
        ListNode* cp=newList;
        for(int i=1;i<v.size();i++){
            ListNode* tempo =new ListNode(v[i]);
            cp -> next=tempo;
            cp = cp -> next;
        }
        return newList;
    }
};
