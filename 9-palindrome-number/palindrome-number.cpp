class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long rev = 0;
        int n,r;
        int org = x;
        while(x>0){
            n = x % 10;
            rev = rev*10 + n;
            x = x/10;
        }
        
        return (rev == org);
    }
};