class Solution {
    public int missingNumber(int[] nums) {
        int n=nums.length;
        int n_sum=n*(n+1)/2;
        int sum=0;
        for(int i:nums)
            sum+=i;
        
        return n_sum-sum;
    }
}
