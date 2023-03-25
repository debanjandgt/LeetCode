class Solution {
    public int[] leftRigthDifference(int[] nums) {
        int prev=0,curr=0;
        int left[]=new int[nums.length];
        int right[]=new int[nums.length];
        for(int i=0;i<nums.length;i++)
        {
            left[i]=prev+curr;
            prev=left[i];
            curr=nums[i];
        }
        
        //Right
        prev=0;curr=0;
        for(int i=nums.length-1;i>=0;i--)
        {
            right[i]=prev+curr;
            prev=right[i];
            curr=nums[i];
        }
        
        //Final
        int ans[]=new int[nums.length];
        for(int i=0;i<nums.length;i++)
        {
            ans[i]=Math.abs(left[i]-right[i]);
        }
        return ans;
    }
}
