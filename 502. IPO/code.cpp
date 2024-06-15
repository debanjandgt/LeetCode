class Solution {
public:
     static bool cmp(const pair<int, int>& p1, const pair<int, int>& p2) {
        if (p1.first != p2.first) {
            return p1.first < p2.first;
        }
        return p1.second > p2.second;
    }
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>> vec;
        for(int i=0;i<profits.size();i++)
        {
            int pr=profits[i];
            int cp=capital[i];
            vec.push_back({cp,pr});
        }
        sort(vec.begin(),vec.end(),cmp);
        int totalCapital=w;
        int j=0;
        priority_queue<int> pq;
        while(k-- > 0)
        {
            while(j<profits.size() && vec[j].first <= totalCapital)
            {
                pq.push(vec[j].second);
                j++;
            }
            if(pq.size() == 0)
            break;
            totalCapital+=pq.top();
            pq.pop();
        }
        return totalCapital;
    }
};
