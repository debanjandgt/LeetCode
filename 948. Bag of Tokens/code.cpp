class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int l=0,r=tokens.size()-1;
        sort(tokens.begin(),tokens.end());
        int currPower=power,currScore=0;
        while(l<=r)
        {
            int v1=tokens[l];
            int v2=tokens[r];
            if(v1 <= currPower)
            {
                currScore++;
                currPower-=v1;
                l++;
            }
            else
            {
                if(l<r && currScore >= 1){
                currScore--;
                currPower+=v2;
                
                }
                r--;
            }
        }
        return currScore ;
    }
};
