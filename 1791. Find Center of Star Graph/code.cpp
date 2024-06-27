class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,list<int>> adjList;
        for(auto i:edges)
        {
            int u=i[0];
            int v=i[1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        int sz=adjList.size();
        for(auto i:adjList)
        {
            if(i.second.size() == sz-1)
            return i.first;
        }
        return -1;
    }
};
