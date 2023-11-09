class Solution {
public:
    int mod=1e9+7;
    int countHomogenous(string s) {
       long long cS=0,answer=0;
       for(int i=0;i<s.size();i++)
       {
           if(i == 0 || s[i] == s[i-1])
           cS++;
           else
           cS = 1; 

           answer = (answer%mod + cS %mod)%mod;
       }
       return answer;
    }
};
