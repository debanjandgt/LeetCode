class Solution {
public:
    int minimumPushes(string word) {
        int len=word.size();
        int cap=8;
        int start=1;
        map<char,int> mp;
        int marks=1;
        for(int i=0;i<word.size();i++)
        {
            char ch=word[i];
            if(mp.find(ch) == mp.end())
            {
                if(start <= 8)
                {
                mp[ch]=marks;
                start++;
                if(start > 8){
                start=1;
                marks++;
                }
                }
            }
        }
        int sum=0;
        for(auto i:word)
        {
            cout << i << " " << mp[i] << endl;
            sum+=mp[i];
        }
        return sum;
    }
};
