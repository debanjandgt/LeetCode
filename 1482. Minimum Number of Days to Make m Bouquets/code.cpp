class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if (((long long)m * k) > bloomDay.size()) return -1;

        long long startLimit = *min_element(bloomDay.begin(), bloomDay.end());
        long long endLimit = *max_element(bloomDay.begin(), bloomDay.end());

        long long ans = -1;

        while (startLimit <= endLimit) {
            long long midi = startLimit + (endLimit - startLimit) / 2;
            cout << startLimit << ":" << endLimit << ":" << midi << endl;
            
            int curr = 0;
            int subs = 0;

            for (int i = 0; i < bloomDay.size(); i++) {
                if (bloomDay[i] <= midi) {
                    curr++;
                    if (curr == k) {
                        curr = 0;
                        subs++;
                        if (subs == m) break;  
                    }
                } else {
                    curr = 0;
                }
            }

            if (subs >= m) {
                ans = midi;  
                endLimit = midi - 1;
                cout << "if" << endl;
            } else {
                startLimit = midi + 1;
                cout << "else " << endl;
            }
        }

        return ans == -1 ? -1 : ans;
    }
};
