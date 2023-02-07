class Solution {
public:
    int getDecimalValue(ListNode* head) {
        long long int value;
        vector<int> s;
        ListNode* copy=head;
        while(copy != NULL){
            s.push_back(copy -> val);
            copy = copy -> next;
        }
        
        int t=0;
        double d=0.0;
        int pos= s.size()-1;
        while(pos >= 0){
            int a = s[pos];
            pos--;
            d=d+(a*(pow(2,t)));
            t++;
            
        }
        return((long long int)d);
    }
};
