class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;

        pq.push({0,{0,0}});
        vector<int> delRow={1,0,-1,0};
        vector<int> delCol={0,1,0,-1};
        vector<vector<int>> distance(heights.size(),vector<int>(heights[0].size(),1e9));
        distance[0][0]=0;
        while(!pq.empty())
        {
            auto it=pq.top();
            int effort=it.first;
            int x=it.second.first;
            int y=it.second.second;
            pq.pop();
            if(x == heights.size()-1 && y== heights[0].size()-1)
            return distance[heights.size()-1][heights[0].size()-1]; 
            for(int i=0;i<4;i++)
            {
                int nrow=x+delRow[i];
                int ncol=y+delCol[i];

                if(nrow >=0 && ncol >= 0 && nrow < heights.size() && ncol < heights[0].size())
                {
                    int temp_effort=abs(heights[nrow][ncol] - heights[x][y]);
                    temp_effort=max(temp_effort,effort);
                    if(temp_effort < distance[nrow][ncol])
                    {
                        distance[nrow][ncol]=temp_effort;
                        pq.push({temp_effort,{nrow,ncol}});
                    }
                }
            }
        }
        return distance[heights.size()-1][heights[0].size()-1]; 
    }
};
