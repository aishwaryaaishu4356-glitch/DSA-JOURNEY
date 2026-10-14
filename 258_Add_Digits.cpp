class Solution {
public:
    int addDigits(int num) {
        int sum,n;
        int ans = num;
        while(ans/10!=0){
            sum =0;
            while(num>0){
                n = num%10;
                sum = sum +n;
                num = num/10;
            }
            num = sum;
            ans=sum;
        }
        return ans;
    }
};