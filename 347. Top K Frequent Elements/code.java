class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        int val=0;
        HashMap<Integer,Integer> map=new HashMap<>();
        for(int i:nums){
            map.put(i,map.getOrDefault(i,0)+1);
        }
        HashSet<Integer> HS=new HashSet<>();
        while(k!=0){
            k--;
            int freq=Integer.MIN_VALUE;
            for(Map.Entry<Integer,Integer> entry : map.entrySet()){
                if(entry.getValue()>freq){
                    freq=entry.getValue();
                    val=entry.getKey();
                }
            }
            HS.add(val);
            map.remove(val);
        }
        int arr[]=new int[HS.size()];
        int t=0;
        for(int i:HS){
            arr[t]=i;
            t++;
        }
        return(arr);
    }
}
