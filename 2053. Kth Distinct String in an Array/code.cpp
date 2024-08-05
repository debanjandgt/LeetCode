class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        for(auto i:arr)
        {
            mp[i]++;
        }
        string probAns="";
        int cnt=0;
        unordered_set<string> st;
        vector<string> probables;
        for(auto i:arr)
        {
            if(mp[i] == 1)
            {
                if(st.find(i) == st.end())
                {
                    st.insert(i);
                    probables.push_back(i);
                    cnt++;
                    if(probAns == "")
                    probAns=i;
                }
            }
        }
        return cnt >= k ? probables[k-1] : "";
    }
};
