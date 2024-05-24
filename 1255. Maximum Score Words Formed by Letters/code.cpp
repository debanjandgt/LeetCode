class Solution {
public:
    int maxi=0;
    void checkMaxScore(vector<string>& vec,map<char,int> freq,map<char,int> scores)
    {
        int score=0,fl=0;
        for(auto i:vec)
        {
            for(auto j:i)
            {
                if(freq[j] >= 1)
                {
                    freq[j]-=1;
                    score+=scores[j];
                }
                else
                {
                    fl=1;
                    break;
                }
            }
        }
        if(fl == 0)
        maxi=max(maxi,score);

        return;
    }
    void solve(int index,vector<string>& words,vector<string>& vec,map<char,int>& freq,map<char,int>& scores)
    {
        if(index >= words.size())
        {
            checkMaxScore(vec,freq,scores);
            return;
        }
        vec.push_back(words[index]);
        solve(index+1,words,vec,freq,scores);
        vec.pop_back();
        solve(index+1,words,vec,freq,scores);
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        map<char,int> freq;
        map<char,int> scores;
        for(auto i:letters)
        {
            freq[i]++;
        }
        char ch='a';
        for(auto i:score)
        {
            scores[ch]=i;
            ch++;
        }
        vector<string> vec;
        solve(0,words,vec,freq,scores);
        return maxi;
    }
};
