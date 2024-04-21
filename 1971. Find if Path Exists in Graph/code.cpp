class Solution {
public:
    int dest;
    bool solve(int node,vector<vector<int>>& adjList,vector<int>& visited)
    {
        visited[node]=1;
        for(auto i:adjList[node])
        {
            if(i == dest)
            return true;
            else if(visited[i] == 0)
            {bool ans=solve(i,adjList,visited);
            if(ans)
            return true;}
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination)
        return true;
        vector<vector<int>> adjList(n+1);
        dest=destination;
        for(auto i:edges)
        {
            int u=i[0];
            int v=i[1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        vector<int> visited(n+1,0);
        visited[source]=1;
        for(auto i:adjList[source])
        {
            if(i == destination)
            return true;
            bool ans=solve(i,adjList,visited);
            if(ans)
            return ans;
        }
        return false;
    }
};
