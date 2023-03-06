class Solution {
    public int removeDuplicates(int[] nums) {
        ArrayList<Integer> a1=new ArrayList<>();
        int slow=0,fast=1;
        while(fast<nums.length){
            if(nums[slow]==nums[fast]){
                fast++;
            }
            else if(nums[slow]!=nums[fast]){
                slow++;
                
                nums[slow]=nums[fast];
                fast++;
            }
        }
        return(slow+1);
    }
}
