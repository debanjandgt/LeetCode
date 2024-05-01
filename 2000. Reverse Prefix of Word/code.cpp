class Solution {
public:
    string reversePrefix(string word, char ch) {
        string pref;
        int p=-1;
        for(int i=0;i<word.size();i++)
        {
            pref=word[i]+pref;
            if(word[i] == ch){
                p=i;
            break;
            }
        }
        string t;
        for(int i=p+1;i<word.size();i++)
        {
            t=t+word[i];
        }
        return p==-1? word: pref+t;
    }
};
