class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++)
        {
            char ch1=words[i][0];
            int l=words[i].size()-1;
            char ch2 = words[i][l];
            if((ch1 == 'a' || ch1 == 'e' ||ch1 == 'i' ||ch1 == 'o' ||ch1 == 'u') && (ch2 == 'a' || ch2 == 'e' ||ch2 == 'i' ||ch2 == 'o' ||ch2 == 'u'))
                count++;
        }
        return count;
    }
};
