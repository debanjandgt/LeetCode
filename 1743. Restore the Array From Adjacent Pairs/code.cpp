class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int,list<int>> graph;
        for(auto i:adjacentPairs)
        {
            graph[i[0]].push_back(i[1]);
            graph[i[1]].push_back(i[0]);
        }
        int root=-1e9;
        for(auto i:graph)
        {
            if(i.second.size() == 1)
            {
                root = i.first;
                break;
            }
        }
        vector<int> answer;
        int prev=-1e9;
        dfs(graph,root,answer,prev);
        return answer;
    }
    void dfs(unordered_map<int,list<int>>& graph,int node,vector<int>& answer,int prev)
    {
        answer.push_back(node);
        for(auto it:graph[node])
        {
            if(it != prev)
            dfs(graph,it,answer,node);
        }
    }
};
