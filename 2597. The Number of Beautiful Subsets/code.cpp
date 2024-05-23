class Solution {
  public: int count = 0;
  void solve(vector < int > & nums, vector < int > & output, int index, vector < vector < int >> & ans, int & k) {
    if (index >= nums.size()) {
        int t = 0;
        for (int i = 0; i < output.size(); i++) {
          for (int j = i + 1; j < output.size(); j++) {
            if (abs(output[j] - output[i]) == k) {
              return;
            }
          }
        }
        if (output.size() >= 1){
          count++;
      }
      return;
    }
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans, k);
    output.pop_back();
    solve(nums, output, index + 1, ans, k);
  }

  int beautifulSubsets(vector < int > & nums, int k) {
    vector < vector < int >> ans;
    vector < int > output;
    int index = 0;
    solve(nums, output, index, ans, k);
    return count;
  }
};
