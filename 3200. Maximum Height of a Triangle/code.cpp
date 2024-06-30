class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
       int cred=red;
       int cblue=blue;
       int l1=1;
       int l2=2;
       int h1=0,h2=0;
       int fl=0;
       int level1=cred;
       int level2=cblue;
        while(true)
        {
            if(fl == 0)
            {
                if(level1 >= l1)
                {
                    level1-=l1;
                    l1+=2;
                    fl=!fl;
                }
                else
                break;
            }
            else if(fl == 1)
            {
                if(level2 >= l2)
                {
                    level2-=l2;
                    fl=!fl;
                    l2+=2;
                }
                else
                break;
            }
            h1++;
        }
        level1=blue;
        level2=red;
        l1=1;
        l2=2;
        fl=0;
        h2=0;
        while(true)
        {
            if(fl == 0)
            {
                if(level1 >= l1)
                {
                    level1-=l1;
                    l1+=2;
                    fl=!fl;
                }
                else
                break;
            }
            else if(fl == 1)
            {
                if(level2 >= l2)
                {
                    level2-=l2;
                    fl=!fl;
                    l2+=2;
                }
                else
                break;
            }
            h2++;
        }
        return max(h1,h2);
    }
};
