class Solution {
public:
    int maxVowels(string s, int k) {
      int l=0,r=0,max=0,cnt=0;
      int n=s.size();
      while(r<n)
      {
          char c=s[r];
          if(c=='a' || c=='e' || c=='i'|| c=='o' || c=='u')
          cnt++;

          if(r-l+1 == k)
          {
              if(cnt>max)
              max=cnt;
              if(s[l]=='a' || s[l]=='e' || s[l]=='i'|| s[l]=='o' || s[l]=='u')
              {
                  cnt--;
              }
              l++;
          }
          r++;
      }
      return max;  
    }
};
