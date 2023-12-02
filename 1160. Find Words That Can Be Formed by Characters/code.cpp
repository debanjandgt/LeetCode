class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
     unordered_map<char,int> mp;
     int ans=0;
     int t=0;
     for(int i=0;i<chars.size();i++)
     {
         mp[chars[i]]++;
     }
     for(auto i:words)
     {
         t=0;
         unordered_map<char,int> mp1(mp.begin(),mp.end());
         for(int j=0;j<i.size();j++)
         {
             if(mp1[i[j]] > 0)
             mp1[i[j]]--;
             else
             {
                 t=1;
                 break;
             }
         }
         if(t == 0)
         {
             ans+=i.size();
         }
     }
     return ans;   
    }
};
