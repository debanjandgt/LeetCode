class Solution {
public:
    int countKeyChanges(string s1) {
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
        int change=0;
        for(int i=1;i<s1.size();i++)
        {
            if(s1[i] != s1[i-1])
            change++;
       }
       return change;
    }
};
