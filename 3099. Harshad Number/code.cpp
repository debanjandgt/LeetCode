class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int num=x;
        int s=0;
        while(num)
        {
            int a=num%10;
            s+=a;
            num/=10;
        }
        return x%s == 0 ? s : -1;
    }
};
