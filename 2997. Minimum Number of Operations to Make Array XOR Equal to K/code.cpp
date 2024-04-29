class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        int n=nums.size(),bit=nums[0],ans=0;
        for(int i=1;i<n;++i){
            bit=bit^nums[i];
        }
        for(int i=0;i<32;++i){
            int a=bit&(1<<i);
            int b=k&(1<<i);
            if(a!=b){
                ans++;
            }
        }
        return ans;
    }
};
