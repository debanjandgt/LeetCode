class Solution {
public:
    int mySqrt(int x) {
       if(x == 1 || x == 0 )
       return x;
       long long int l=1,r=x;
       long long ans =1;
       while(l<=r)
       {
            long long int mid=l+(r-l)/2;
          
           if( (mid * mid) == (long long)x )
           return mid;
           else if((mid * mid) > (long long)x){
               r=mid-1;
           }
           else if ( (mid * mid) < x)
           {
               ans=max(ans,mid);
               l=mid+1;
           }
       }
       return (int)ans; 
    }
};
