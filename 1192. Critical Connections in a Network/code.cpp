class Solution {
public:
int timer=1;
void dfs(int node,int parent,vector<int>& visited,vector<int> adj[],vector<int>& tin,vector<int>& low,vector<vector<int>>& bridges)
{
    visited[node]=1;
    tin[node]=low[node]=timer;
    timer++;
    for(auto it:adj[node])
    {
        //Adj Node is node's parent , therefore ignore 
        if(it == parent)
        continue;

        //Adjacent Node is not Visited
        if(visited[it] == 0)
        {
            dfs(it,node,visited,adj,tin,low,bridges);

            //Node has ComeBack after traveral now see its has LOwer[adj]
            low[node]=min(low[node],low[it]);

            //Now check if this node--adjNode be a bridge
            if(low[it] <= tin[node]) // means it is not a bridge
            continue;

            else // it is a bridge . add it in answer
            {
                bridges.push_back({it,node});
            }
        }
        //Adjacent Node is already Visited . So i can atmost stealhis low if its lower than me
        else
        {
            low[node]=min(low[node],low[it]);
        }
    }
}
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        int V=n;
       vector<int> adj[n];
       //Forming ADJACENT LIST
       for(auto it:connections)
       {
           int u=it[0];
           int v=it[1];
           adj[u].push_back(v);
           adj[v].push_back(u);
       }

       vector<int> visited(V,0);
       vector<int> tin(V);
       vector<int> low(V);
       vector<vector<int>> bridges; 

       //We are assuming the Given Graph is a single component
        // Doing dfs w/o fear of disconnected components
        dfs(0,-1,visited,adj,tin,low,bridges);
        return bridges;
    }
};
