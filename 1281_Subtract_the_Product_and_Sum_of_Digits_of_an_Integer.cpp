class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,product = 1;
        int num,result;
        while(n>0){
            num=n%10;
            sum=sum+num;
            product = product*num;
            n=n/10;
        }
        result = product - sum;
        return result;
    }
};