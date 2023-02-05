class Solution {
    public int findDuplicate(int[] nums) {
        Set<Integer> al=new HashSet<>();
        int num=0;
        for(int i=0;i<nums.length;i++){
            if(!(al.contains(nums[i])))
            al.add(nums[i]);
        else{
        num=nums[i];
            break;
        }
        }
        return(num);
    }
}
