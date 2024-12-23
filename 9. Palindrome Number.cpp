class Solution {
public:
    bool isPalindrome(int n) {
        if(n<0){
            return false;
        }
        long long y,rev = 0;
        long long x=n;
        do{
            y = x%10;
            rev = (rev*10) + y;
            x/=10;

        } while(x!=0);
        return(rev==n);
    
    }
};