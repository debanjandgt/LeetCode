class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        bool flag = true;
        for(int i=0;i<strs[0].size();i++)
        {
            
            char ch=strs[0][i];
            for(int j=1;j<strs.size();j++)
            {
                if(i >= strs[j].size() || ch != strs[j][i])
                {
                flag=false;
                break;
                }  
            }
            if(flag == false)
            return ans;
            else
            ans.push_back(ch);
        }
        return ans;
    }
};
