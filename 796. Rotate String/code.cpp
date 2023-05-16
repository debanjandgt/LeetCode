class Solution {
public:
    bool rotateString(string s, string goal) {
      deque<char> s1,s2;
      for(int i =0;i<s.size();i++)
      {
          s1.push_back(s[i]);
          s2.push_back(goal[i]);
      }
      int j=0;
      while(j<s.size())
      {
          if(s1==s2)
          return true;
          else
          {
              char c=s2.back();
              s2.pop_back();
              s2.push_front(c);
              j++;
          }
      }
      return false;  
    }
};
