class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        unordered_set<int> st;
        for(auto i:nums)
        {
            st.insert(i);
        }
        if(nums[0] == 1 && st.size() == 1 && k> 1)
        {
            long long ans = nums.size() * (nums.size()+1);
            ans/=2;
            return ans;
        }

        if(k == 0 || k == 1)
        return 0;
        long long int currProd=1;
        int cnt=0;
        int ans=0;
        int pos=nums.size() - 1;
        int fl=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            fl=1;
            currProd*=nums[i];
            
            if(currProd < k)
            {
                cnt++;
                ans+=cnt;
                //cout << cnt << " " << ans <<" " << currProd << " first if" << endl;
            }
            else
            {
                while(currProd >= k)
                {
                    //cout << "while enters" << endl;
                     currProd/=nums[pos];
                    if(cnt > 0){
                        cnt--;
                        pos--;
                    }
                    else{
                        currProd=1;
                        pos--;
                        fl=0;
                        break;
                    }
                }
                if(currProd < k && fl == 1)
                {
                    cnt++;
                ans+=cnt;
                //cout << "LAST IF HITTING " << cnt << " " << ans <<" "<< currProd <<" "<< endl;
                }
              
            }
        }
        return ans;
    }
};
