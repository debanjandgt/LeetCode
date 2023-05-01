class Solution {
public:
    double average(vector<int>& salary) {
        double maxi=salary[0];
        double mini=salary[0];
        for(int i=0;i<salary.size();i++)
        {
            if(salary[i]> maxi)
            maxi=salary[i];
            if(salary[i]<mini)
            mini=salary[i];
        }
        double avg=0.0;
        int cnt=0;
        for(int i=0;i<salary.size();i++)
        {
            int val=salary[i];
            if(val != (int)maxi && val != (int)mini)
            {
                cnt++;
                avg+=val;
            }
        }
        return avg/cnt;

    }
};
