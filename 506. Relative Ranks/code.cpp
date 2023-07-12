class Solution {
public:
    static bool cmp(int a,int b)
    {
        return a>b; 
    }
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans;
        map<int,string> mp;
        vector<int> copy(score.begin(),score.end());
        sort(copy.begin(),copy.end(),cmp);
        if(score.size() >=1)mp[copy[0]]="Gold Medal";
       if(score.size() >=2) mp[copy[1]]="Silver Medal";
        if(score.size() >=3)mp[copy[2]]="Bronze Medal";
        int pos=4;
        for(int i=3;i<score.size();i++)
        {
         
           
            
            mp[copy[i]]=to_string(pos);
             pos++;
        }
        vector<string> finalAns;
        for(int i=0;i<score.size();i++)
        {
            finalAns.push_back(mp[score[i]]);
        }
        return finalAns;
    }
};
