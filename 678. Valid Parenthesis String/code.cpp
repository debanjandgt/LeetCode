class Solution {
public:
    int solve(int ind,int openCount,string& s,vector<vector<int>>& dp)
    {
        if(ind == s.size())
        return openCount == 0;

        if(dp[ind][openCount] != -1)
        return dp[ind][openCount];

        bool isValid=false;
        if(s[ind] =='(')
        isValid=isValid|solve(ind+1,openCount+1,s,dp);
        else if(s[ind] == '*')
        {
            isValid=isValid|solve(ind+1,openCount+1,s,dp);
            if(openCount > 0)
            isValid=isValid|solve(ind+1,openCount-1,s,dp);
            isValid=isValid|solve(ind+1,openCount,s,dp);
        }
        else
        {
            if(openCount > 0)
            isValid=isValid|solve(ind+1,openCount-1,s,dp);
        }
        return dp[ind][openCount] = isValid;
    }
    bool checkValidString(string s) {
        int n=s.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return solve(0,0,s,dp);    
        }
};
