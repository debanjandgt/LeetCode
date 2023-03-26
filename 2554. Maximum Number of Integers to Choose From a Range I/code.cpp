class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        long long int sum=0,count=0;
        unordered_map<int,bool> m;
        for(int i=0;i<banned.size();i++)
        m[banned[i]] = true;
        for(int i=1;i<=n;i++)
        {
            if(m[i])
            continue;
             else if( sum+i<=maxSum )
            {
                sum+=i;
                count++;
                if(sum > maxSum)
                break;
            }
            
           
        }
        return count;
    }
};
