class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> mp;
        for(auto i:arr)
        mp[i]++;

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto i:mp)
        {
            int val=i.first;
            int freq=i.second;
            pq.push({freq,val});
        }
        while(pq.size() >= 1 && k > 0)
        {
            auto fr=pq.top();
            int freq=fr.first;
            if(k >= freq)
            {
                k-=freq;
                pq.pop();
            }
            else break;
        }
        return pq.size();
    }
};
