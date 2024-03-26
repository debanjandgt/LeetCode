class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        ArrayList<Integer> al=new ArrayList<>();
        Arrays.sort(nums);
        for(int i=0;i<nums.length-1;i++){
            if(nums[i]==nums[i+1])
                al.add(nums[i]);
        }
        return(al);
    }
}
