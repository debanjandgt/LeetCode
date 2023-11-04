class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int answer=0;
        for(auto i:left)
        answer=max(answer,i);

        for(auto i:right)
        answer=max(answer,n-i);

        return answer;
    }
};
