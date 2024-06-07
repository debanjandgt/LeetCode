class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> st;
        for(auto i:dictionary)
        {
            st.insert(i);
        }
        string fAns="",temp="";
        int skip=0;
        for(int i=0;i<sentence.size();i++)
        {
            char ch=sentence[i];
            if(ch != ' ')
            {
                if(skip == 0)
                {
                    temp.push_back(ch);
                    if(st.find(temp) != st.end())
                    {
                        skip=1;
                    }
                }
            }
            else
            {
                temp+=' ';
                fAns+=temp;
                temp="";
                skip=0;
            }
        }
        fAns+=temp;
        return fAns;
    }
};
