class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        set<string> st(nums.begin(),nums.end());
        for(int i=0;i<pow(2,n);i++)
        {
             string sp = bitset<16>(i).to_string().substr(16 - n);
            
            if (st.find(sp) == st.end())
                return sp;
        }
        return "hi";
    }
};
