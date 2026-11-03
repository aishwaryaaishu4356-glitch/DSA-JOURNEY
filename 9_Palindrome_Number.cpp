/*
LeetCode #9 -Palindrome Number
Approach: Digit Reversal
Time Complexity:O(log10 n)
Space Complexity:(1)
*/
class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        int rev=0;
        while(x>0){
            int num=x%10;
             if(rev >INT_MAX /10 || rev<INT_MIN/10){
                return 0;
            }
            if(rev==INT_MAX/10 && num>7){
                return 0;
            }
            if(rev == INT_MIN/10 && num<-8){
                return 0;
            }
            rev = rev*10 + num;
            x=x/10;
        }
        if(original == rev){
            return true;
        }else{
            return false;
        }
    }
};