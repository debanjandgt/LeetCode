class Solution {
public:
    bool isPalindrome(int x) {
        long long int copy=x,w=0;
        while(copy>0){
            int a=copy%10;
            w=w*10+a;
            copy/=10;
        }
        if(w==x)
        return(true);
        else
        return(false);
    }
};
