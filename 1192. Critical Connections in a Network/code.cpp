class Solution {
public:
    int timer=1;
    void solve(int node,int parent,unordered_map<int,list<int>>& adjList,vector<int>&            
    visited,vector<int>& tin,vector<int>& low,vector<vector<int>>& ans)
            {
                visited[node]=1;
                tin[node]=low[node]=timer;
                timer++;
                for(auto it:adjList[node])
                {
                    if(it == parent)
                    continue;
                    if(visited[it] == 0){
                        solve(it,node,adjList,visited,tin,low,ans);
                        low[node]=min(low[node],low[it]);

                       // node ------ it

                        if(low[it] > tin[node])
                        ans.push_back({node,it});
                    }
                    else
                    {
                        low[node]=min(low[node],low[it]);
                    }
                }
            }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int> visited(n,0);
        unordered_map<int,list<int>> adjList;
        vector<int> tin(n);
        vector<int> low(n);

        //Creating the Adj.List

        for(auto i:connections)
        {
            int u=i[0];
            int v=i[1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
            
            int node=0,parent=-1;
            vector<vector<int>> ans;
            solve(node,parent,adjList,visited,tin,low,ans);
            return ans;
       
    }
};
