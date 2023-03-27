class Solution {
public:
    void solve_neg(vector<int>& nums, int s, int e, set<int>& negIndex) {
        if (s >= e) return;
        int mid = (s + e) / 2;
        if (nums[mid] < 0) {
            negIndex.insert(mid);
            solve_neg(nums, s, mid, negIndex);
            solve_neg(nums, mid + 1, e, negIndex);
        } else {
            solve_neg(nums, s, mid, negIndex);
        }
    }
    
    void solve_pos(vector<int>& nums,int s,int e,set<int>& posIndex)
{
    if(s>=e)
        return;
    int mid=(s+e)/2;
     if(nums[mid] > 0)
    {
        posIndex.insert(mid);
        solve_pos(nums,s,mid,posIndex);
        solve_pos(nums,mid+1,e,posIndex);
    }
    else if(nums[mid] == 0) {
      
        solve_pos(nums,mid+1,e,posIndex);
    } else {
        solve_pos(nums,mid+1,e,posIndex);
    }
}

    int maximumCount(vector<int>& nums) {
        set<int> negIndex;
        set<int> posIndex;
        int s=0,e=nums.size()-1,zeros=0;
        solve_neg(nums,s,e,negIndex);
        solve_pos(nums,s,e,posIndex);
        if(nums.size() == 1)
        return nums.size();
        if(negIndex.size() == 0 && posIndex.size() == 0)
        return 0;
        if(negIndex.size() == 0 || posIndex.size() == 0)
        return nums.size();

        cout << "neg" << negIndex.size() << endl;
         cout << "pos" << posIndex.size() << endl;
        
        return posIndex.size()+1 > negIndex.size() ? posIndex.size()+1:negIndex.size();
    }
};
