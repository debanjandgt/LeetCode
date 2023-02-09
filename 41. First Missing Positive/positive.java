class Solution {
    public int firstMissingPositive(int[] nums) {
        HashSet<Integer> al=new HashSet<>();
        for(int i=0;i<nums.length;i++)
            al.add(nums[i]);
        for(int i=1;i<=nums.length+1;i++){
            if(!(al.contains(i)))
                return(i);
        }
        return(-1);
    }
}
