class Solution {
    public int reverse(int x) {
        long w=0;
        while(x!=0){
            w=(w*10)+(x%10);
            x=x/10;
        }
        if(w>Integer.MAX_VALUE || w<Integer.MIN_VALUE)
            return(0);
        else
            return((int)w);
    }
}
