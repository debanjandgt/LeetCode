class Solution {
public:
    void solve(int node,set<int>& st, unordered_map<int,vector<int>>& adjList,
                        vector<int>& visited)
    {
        for(auto i:adjList[node])
        {
            if(!visited[i])
            {st.insert(i);
            visited[i]=1;
            solve(i,st,adjList,visited);}
        }
        return;
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> fAns;
        unordered_map<int,vector<int>> adjList;
        for(auto i:edges)
        {
            int u=i[0];
            int v=i[1];
            adjList[v].push_back(u);
        }
        for(int i=0;i<n;i++)
        {
            if(adjList.find(i) == adjList.end())
            fAns.push_back({});
            else
            {
                set<int> st;
                vector<int> visited(n,0);
                vector<int> temp;
                for(auto j:adjList[i])
                {
                    if(visited[j] == 0)
                    {
                        visited[j]=1;
                    st.insert(j);
                    solve(j,st,adjList,visited);
                    }
                   
                }
                 for(auto i:st)
                    {
                        //cout << i << " ";
                        temp.push_back(i);
                    }
                fAns.push_back(temp);
            }

        }
        return fAns;
    }
};
