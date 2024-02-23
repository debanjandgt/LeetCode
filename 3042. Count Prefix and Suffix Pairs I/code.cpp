class Solution {
public:
    bool checkPairs(string& a,string& b)
    {
        int n=b.size() - 1; 
        string suff,pref;
        for(int k=0;k<b.size();k++)
            {
                pref+=b[k];
                suff=b[n--]+suff;
                if(pref == a && suff == a)
                    {
                        cout << a << " " << b << endl;
                        return true;
                    }
                }
                return false;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt=0;
        for(int i=0;i<words.size();i++)
        {
            string pref,suff;
            for(int j=i+1;j<words.size();j++)
            {
                bool ans=checkPairs(words[i],words[j]);
                if(ans)
                cnt++;
            }
        }
        return cnt;
    }
};
