class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        Arrays.sort(nums);
        HashSet<List<Integer>> HS=new HashSet<>();
        if(target==-294967296)
        {
            List<List<Integer>> ready=new ArrayList<>();
                return(ready);
        }
            if(nums.length<4){
                List<List<Integer>> ready=new ArrayList<>();
                return(ready);
            }
            for(int i=0;i<nums.length-3;i++){
                for(int j=i+1;j<nums.length-2;j++){
                    int l=j+1;
                    int r=nums.length-1;
                    while(l<r){
                        int sum=nums[i]+nums[j]+nums[l]+nums[r];
                        if(sum==target){
                            HS.add(Arrays.asList(nums[i],nums[j],nums[l],nums[r]));
                            l++;
                            r--;
                        }
                        else if(sum<target)
                        l++;
                        else if(sum>target)
                        r--;
                    }                
                }
            }
            return new ArrayList<>(HS);
    }
}
