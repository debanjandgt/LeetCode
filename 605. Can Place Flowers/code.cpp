class Solution {
    public boolean canPlaceFlowers(int[] arr, int n) {
        HashSet<Integer> hs=new HashSet<Integer>();
        int l=arr.length;
        int count=0;
        hs.add(-1);
        hs.add(l);
        for(int i=0;i<l;i++)
        {
            if(arr[i]==0)
                hs.add(i);
        }
        System.out.println(hs);
        for(int i=0;i<l;i++)
        {
            if(hs.contains(i)==true && hs.contains(i-1)==true && hs.contains(i+1)==true)
            {
                count++;
                hs.remove(i);
            }
            
        }
        System.out.print("count"+count);
        if(count>=n)
            return true;
        else
            return false;
    }
}
