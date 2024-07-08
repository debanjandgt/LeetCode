class Solution {
public:
    int findTheWinner(int n, int k) {
        unordered_set<int> st;
        for(int i=1;i<=n;i++)
        {
            st.insert(i);
        }
        int curr=1;
        int ntd;
        while(st.size() >= 2)
        {
            ntd=curr;
            int jumper=k-1;
            while(jumper)
            {
                if(st.find(ntd) != st.end())
                {
                    jumper--;
                    ntd++;
                }
                else
                {
                    ntd++;
                    if(ntd > n)
                    ntd=1;
                }
            }
            while(st.find(ntd) == st.end())
            {
                ntd++;
                if(ntd > n) ntd=1;
            }
            st.erase(ntd);
            curr=ntd+1;
            if(curr > n)
            curr=1;
            while(st.find(curr) == st.end())
            {
                curr++;
                if(curr > n)
                curr=1;
            }
        }
        return *st.begin();
    }
};
