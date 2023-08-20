class DisjointSet
{
public:
    vector<int> rank, parent, size;
	DisjointSet(int n)
	{
		rank.resize(n + 1, 0);
		parent.resize(n + 1);
		size.resize(n + 1, 1);
		for (int i = 0; i <= n; i++)
		{
			parent[i] = i;
		}
	}
	int findPar(int node)
	{
		if (node == parent[node])
			return node;
		return parent[node] = findPar(parent[node]);
	}
	void unionByRank(int u, int v)
	{
		int ulp_u = findPar(u);
		int ulp_v = findPar(v);
		//If they belong to same component ,I need not to do anything
		if (ulp_v == ulp_u)
			return;
		else
		{
			if (rank[ulp_u] < rank[ulp_v])
			{
				parent[ulp_u] = ulp_v;
			}
			else if (rank[ulp_v] <  rank[ulp_u] )
			{
				parent[ulp_v] = ulp_u;
			}
			else
			{
				//They are Same
				parent[ulp_u] = ulp_v;
				rank[ulp_v] += 1;
			}
		}
	}
	void unionBySize(int u, int v)
	{
		int ulp_u = findPar(u);
		int ulp_v = findPar(v);
		//If they belong to same component ,I need not to do anything
		if (ulp_v == ulp_u)
			return;
		if (size[ulp_u] < size[ulp_v])
		{
			parent[ulp_u] = ulp_v;
			size[ulp_v] += size[ulp_u];
		}
		else
		{
			parent[ulp_v] = ulp_u;
			size[ulp_u] += size[ulp_v];
		}
	}
};

class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        int maxRow=0,maxCol=0;
        //For finding out Grid Dimensions
        for(auto it:stones)
        {
            maxRow=max(maxRow,it[0]);
            maxCol=max(maxCol,it[1]);
        }
        //Declare DSU
        DisjointSet ds(maxRow+maxCol+1);
        unordered_set<int> st;
        //Performing Combining 
        for(auto it:stones)
        {
            int nodeRow=it[0];
            int nodeCol=it[1]+maxRow+1; 
            ds.unionBySize(nodeRow,nodeCol);
            st.insert(nodeRow);
            st.insert(nodeCol);
        }
        int cnt=0;
        //if elem == UP(elem) means , we got a component
        for(auto it:st)
        {
            int elem=it;
            if(ds.findPar(elem) == elem)
            cnt++;
        }
        return stones.size()-cnt;
       }
};
