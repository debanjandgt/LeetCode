class Solution {
public:
    int passThePillow(int n, int time) {
       int fl=0;
       int i=1;
       while(time-- > 0)
       {
         cout << i << " " << fl << "\n";
        if(fl == 0 && i < n)
        {
            i++;
        }
        else if(fl == 0 && i == n)
        {
            i--;
            fl=!fl;
        }
        else if(fl == 1 && i == 1)
        {
            i++;
            fl=!fl;
        }
        else if(fl == 1 && i<n)
        {
            i--;
        }
        
       
       }
       cout << "\n";
       return i; 
    }
};
