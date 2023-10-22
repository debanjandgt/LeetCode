class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(),processorTime.end());
        sort(tasks.begin(),tasks.end());
        vector<int> maxis;
        int i=0,r=tasks.size()-1;
        int maxi=0;
        int t=0;
        while(r<tasks.size())
        {
           
            maxi=max(maxi,processorTime[t]+tasks[r]);
            if(r%4 == 0)
            {
                maxis.push_back(maxi);
                maxi=0;
                t++;
            }
            r--;
        }
        int ans=-1e9;
        for(int i=0;i<maxis.size();i++)
        {
            ans=max(ans,maxis[i]);
        }
        return ans;
    }
};
