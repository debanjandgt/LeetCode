class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n=points.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int x1=points[i][0];
            int y1=points[i][1];
            for(int j=0;j<n;j++)
            {
                int x2=points[j][0];
                int y2=points[j][1];
                if(i == j)
                continue;
                else
                {
                    if(y1 >= y2 && x1 <= x2)
                    {
                        cnt++;
                        for(int k=0;k<n;k++)
                        {
                            int x3=points[k][0];
                            int y3=points[k][1];
                            if(k == i || k == j)
                            continue;
                            else
                            {
                                if(x3>=x1 && x3 <= x2 && y3>=y2 && y3 <= y1){
                                cnt--;
                               break;
                                }
                            }
                        }
                    }
                }

            }
        }
        return cnt;
    }
};
