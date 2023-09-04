class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if(s1 == s2)
            return true;
        string s111=s1;
        string s112=s1;
        string s221=s2;
        string s222=s2;
        swap(s111[2],s111[0]);
        swap(s112[3],s112[1]);
        if(s111 == s2 || s112 == s2)
            return true;
        swap(s111[3],s111[1]);
        swap(s112[2],s112[0]);
           if(s111 == s2 || s112 == s2)
            return true;
        
        swap(s221[2],s221[0]);
        swap(s222[3],s222[1]);
        if(s221 == s1 || s222 == s1)
            return true;
        swap(s221[3],s221[1]);
        swap(s222[2],s222[0]);
           if(s221 == s1 || s222 == s1)
            return true;
        
        return false;
        
        
    }
};
