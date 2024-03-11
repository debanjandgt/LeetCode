class Solution {
public:
    string customSortString(string order, string s) {
        string finalAns;
        unordered_set<int> pos;
        for(int i=0;i<order.size();i++)
        {
            for(int j=0;j<s.size();j++)
            {
                if(order[i] == s[j] && pos.find(j) == pos.end())
                {
                    finalAns.push_back(s[j]);
                    pos.insert(j);
                }
            }
        }
        for(int j=0;j<s.size();j++)
        {
            if(pos.find(j) == pos.end())
                {
                    finalAns.push_back(s[j]);
                }
        }
        return finalAns;
    }
};
