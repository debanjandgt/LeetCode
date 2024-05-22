class Solution {
public:
    static bool cmp(pair<int,int> p1,pair<int,int> p2)
    {
        if(p1.first < p2.first)
        return true;
        else if(p1.first == p2.first)
        {
            if(p1.second < p2.second)
            return true;
            else return false;
        }
        return false;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> fAns;
        int n=arr.size();
       // priority_queue<pair<int,int>>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<pair<int,int>> vect;
        for(int i=0;i<n;i++)
        {
            int value=arr[i];
            int diff=abs(x-value);
            vect.push_back({diff,value});
        }
        sort(vect.begin(),vect.end(),cmp);
        for(int i=0;i<k;i++)
        {
//cout << vect[i].second << " " << vect[i].first << endl;
            fAns.push_back(vect[i].second);
        }
        sort(fAns.begin(),fAns.end());
        return fAns;
    }
};
