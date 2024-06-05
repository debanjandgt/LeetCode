class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        map<char,int> m1;
        string prev=words[0];
        for(auto j:prev)
            {
                m1[j]++;
            }
        for(int i=1;i<words.size();i++)
        {
            string curr;
            map<char,int> m2;
            for(auto j:words[i])
            {
                m2[j]++;
            }
            for(auto i:m1)
            {
                char c=i.first;
                m1[c]=min(m1[c],m2[c]);
            }
           
            cout << prev<<" ";
        }
         prev="";
            for(auto i:m1)
            {
                int fr=i.second;
                while(fr > 0)
                {
                    prev.push_back(i.first);
                    fr--;
                }
            }
        vector<string> vec;
        for(auto i:prev)
        {
            string crab="";
            crab=i;
            vec.push_back(crab);
        }
        return vec;
    }
};
