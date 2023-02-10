class Solution {
    public int removeDuplicates(int[] nums) {
        HashMap<Integer,Integer> map=new HashMap<>();
        ArrayList<Integer> al=new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            map.put(nums[i],map.getOrDefault(nums[i],0)+1);
            
        }
        int t=0;
        for(int i=0;i<nums.length;i++){
            int freq=map.get(nums[i]);
            if((freq>=2)&&(!(al.contains(nums[i])))){
                al.add(nums[i]);
                al.add(nums[i]);
            }
            else if((freq<2)&&(!(al.contains(nums[i]))))
            al.add(nums[i]);
        }
        System.out.println(al);
        for(int i=0;i<al.size();i++)
        nums[i]=al.get(i);
        return(al.size());
    }
}
