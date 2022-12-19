class Solution {
public:
    int reverse(int x) {
        int n;
        n=x;
        int ans=0;
        int digit;

        while(n!=0){
            if (ans>INT_MAX/10 || ans<INT_MIN/10){
                return 0;
            }
            digit=n%10;
            ans=(ans*10)+digit;
            n=n/10;

        }
       return ans;
    }
};