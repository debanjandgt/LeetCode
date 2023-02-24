import java.util.*;
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        ArrayList<Integer> array1=new ArrayList<>();
        int t=0;
        for(int i=0;i<m;i++){
            int a=nums1[i];
            if((a==0)&&(t<=m)){
            array1.add(a);
            t++;    
            }
            if(a!=0)
                array1.add(a);
        }
        for(int i=0;i<nums2.length;i++)
            array1.add(nums2[i]);
        Collections.sort(array1);
        System.out.println(array1);
        int back[]=new int[array1.size()];
        for(int i=0;i<array1.size();i++){
            nums1[i]=array1.get(i);
        }
    }
    
}
