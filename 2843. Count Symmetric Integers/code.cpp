class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans=0;
        for(int j=low;j<=high ;j++)
        {
            string num=to_string(j);
            if(num.size() % 2 == 1)
            continue;
            int i=0,l=num.size()-1;
            long long sum1=0,sum2=0;
            while(i<l)
            {
                char c1=num[i];
                char c2=num[l];
                int v1=c1-'0';
                int v2=c2-'0';
                sum1+=c1;
                sum2+=c2;
                i++;
                l--;
            }
            if(sum1 == sum2){
                cout << j <<" ";
            ans++;
            }
        }
        return ans;
    }
};
