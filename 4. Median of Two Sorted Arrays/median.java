class Solution {
    public float findMedianSortedArrays(int[] nums1, int[] nums2) {
        ArrayList<Integer> al=new ArrayList<>();
        int k=0;
        for(int i=0;i<nums1.length;i++)
            al.add(nums1[i]);
        for(int i=0;i<nums2.length;i++)
            al.add(nums2[i]);
        Collections.sort(al);
        int l=al.size();
        if(l%2!=0)
        {
            int m=l/2;
            return(al.get(m));
        }
        else{
            int a1=al.get((l/2));
            System.out.println(a1);
            int a2=al.get((l/2)-1);
            System.out.println(a2);
            float x=(float)(a1+a2)/2;
            System.out.println(x);
            return(x);
        }
    }
}
