class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else{
         long long int reversed=0,m=x;
         while(m){
            long long int rem=m%10;
            reversed=reversed*10 + rem;
            m=m/10;
         }
         if(reversed==x){
            return true;
         }
         return false;
        }
    }
};