class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt=0;
        for(int i=0;i<details.size();i++)
        {
            char c1=details[i][11];
            char c2=details[i][12];
            string sp;
            sp.push_back(c1);
            sp.push_back(c2);
            int v=stoi(sp);
            if(v>60)
            cnt++;
        }
        return cnt;

    }
};
