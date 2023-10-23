class Solution {
    public boolean isPowerOfFour(int n) {
        if(n==1)
            return(true);
        if(n%2!=0)
            return(false);
        for(int i=1;i<=n;i++){
            int val=(int)Math.pow(4,i);
            if(val==n)
                return(true);
            if(val>n)
                return(false);
        }
        return false;
    }
}
