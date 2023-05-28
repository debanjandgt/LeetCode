class Solution {
    public int searchInsert(int[] nums, int target) {
        ArrayList<Integer> al =new ArrayList<>();
        int t=0,pos=0;
        for(int i=0;i<nums.length;i++){
            if(target==nums[i]){
                t=1;
                pos=i;
                break;
            }
        }
        if(t==1)
            return(pos);
        if(t==0){
            al.add(target);
            for(int i=0;i<nums.length;i++){
                int a=nums[i];
                al.add(a);
            }
         Collections.sort(al);
            for(int i=0;i<al.size();i++){
                if(target==al.get(i))
                {
                    pos=i;
                    break;
                }
            }
        }
        return(pos);
        
    }
}
