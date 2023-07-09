class Solution {
public:
    void dfskarde(vector<vector<int>>& adjList,int node,vector<int>& vis)
    {
        vis[node]=1;
        for(auto it:adjList[node])
        {
            if(vis[it] == 0)
            {
                dfskarde(adjList,it,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<vector<int>> adjList(isConnected.size() + 1);
        for(int i=0;i<isConnected.size();i++)
        {
            for(int j=0;j<isConnected[0].size();j++)
            {
                if(isConnected[i][j] == 1)
                {
                    int u=i+1,v=j+1;
                    adjList[u].push_back(v);
                    adjList[v].push_back(u);
                }
            }
        }
        int component=0;
        vector<int>vis(adjList.size()+1,0);
        for(int i=1;i<adjList.size();i++)
       {
           if(vis[i] == 0){
               component++;
                dfskarde(adjList,i,vis);
           }
       }
       return component;
    }
};
