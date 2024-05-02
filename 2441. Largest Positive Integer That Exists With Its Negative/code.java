class Solution {
    public int findMaxK(int[] nums) {
        Arrays.sort(nums);
        HashSet<Integer> HS=new HashSet<>();
        for(int i=0;i<nums.length;i++)
            HS.add(nums[i]);
        for(int i=nums.length-1;i>=0;i--){
            int neg=nums[i]*(-1);
            if(HS.contains(neg))
                return(nums[i]);
        }
        return(-1);
    }
}
