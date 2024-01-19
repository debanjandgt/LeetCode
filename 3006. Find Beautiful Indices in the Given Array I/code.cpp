class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        vector<int> a_index,b_index;
        int a_length=a.size();
        int b_length=b.size();
        //job 1 Done
        for(int i=0;i<s.size();i++)
        {
            if(s.substr(i,a_length) == a) a_index.push_back(i);
            if(s.substr(i,b_length) == b) b_index.push_back(i);
        }
        //JOB 2
        vector<int> ans;
        int i1=0,i2=0;
        while(i1<a_index.size() && i2<b_index.size())
        {
            int val=abs(a_index[i1]-b_index[i2]);
            if(val <= k)
            {
                ans.push_back(a_index[i1]);
                i1++;
            }
            else if(a_index[i1] < b_index[i2])
            i1++;
            else i2++;
        }
        return ans;
    }
};
