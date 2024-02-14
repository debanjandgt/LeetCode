class Solution {
    public int[] rearrangeArray(int[] nums) {
        ArrayList<Integer> a1=new ArrayList<>();
        ArrayList<Integer> a2=new ArrayList<>();
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]<0)
                a2.add(nums[i]);
            else
                a1.add(nums[i]);
        }
        int t1=0,t2=0;
        for(int i=0;i<nums.length;i++){
            if(i%2==0){
                nums[i]=a1.get(t1);
                t1++;
            }
            else{
                nums[i]=a2.get(t2);
                t2++;
            }
        }
        return(nums);
    }
}
