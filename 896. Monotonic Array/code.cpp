class Solution {
public:
    static bool compareDescending(int a, int b) {
    return a > b;
}
    bool isMonotonic(vector<int>& nums) {
        vector<int> a1=nums;
        vector<int> a2=nums;
        sort(a1.begin(),a1.end());
        sort(a2.begin(),a2.end(),compareDescending);
        if(a1 == nums  || a2 == nums)
        return true;
        return false;
    }
};
