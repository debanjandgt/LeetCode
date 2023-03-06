class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
            Arrays.sort(nums);
            HashSet<List<Integer>> al=new HashSet<>();
            if(nums.length<3){
                List<List<Integer>> ready=new ArrayList<>();
                return(ready);
            }
            
            int t=0;
          for(int i=0;i<nums.length-2;i++){
              int l=i+1;
              int r=nums.length-1;
              while(l<r){
                  int a=nums[l];
                  int b=nums[r];
                  int sum=nums[i]+a+b;
                  if(sum==0)
                  {
                      al.add(Arrays.asList(nums[i],a,b));
                      l++;
                      r--;
                  }
                  else if(sum>0)
                  r--;
                  else if((sum<0))
                  l++;
              }
          }
          return new ArrayList<>(al);
    }
}
