class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> visited(numCourses,0);
        
        //Make Adj List
        unordered_map<int,list<int>> adj;
        for(int i=0;i<prerequisites.size();i++)
        {
            int u=prerequisites[i][0];
            int v=prerequisites[i][1];
            adj[u].push_back(v);
        }
        //Make Indegree
        vector<int> inDegree(numCourses,0);
        for(int i=0;i<numCourses;i++)
        {
            for(auto j:adj[i])
            {
                inDegree[j]++;
            }
        }
        //Find For 0 indegree nodes
        queue<int> q;

        for(int i=0;i<numCourses;i++)
        {
            if(inDegree[i] == 0)
            q.push(i);
        }
       
       //Reduce the INDEGREE
    vector<int> ans;
       while(!q.empty())
       {
           int frontNode=q.front();
           ans.push_back(frontNode);
           q.pop();
           for(auto i:adj[frontNode])
           {
               inDegree[i]--;
               if(inDegree[i] == 0)
               q.push(i);
           }
       }
       return ans.size() == numCourses;

    }
};
