class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> vec;
        vec.push_back(0);
        int elem=0;
        for(int i=0;i<gain.size();i++)
        {
            elem=elem+gain[i];
            vec.push_back(elem);
        }
        int maxi=INT_MIN;
        for(int i=0;i<vec.size();i++)
        {
            maxi=max(maxi,vec[i]);
        }
        return maxi;
    }
};
