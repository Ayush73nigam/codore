class Solution {
public:
    int reverse(int x) {
         int reversed=0,m=x;
         while(m){
            int rem=m%10;
            m=m/10;
            if(reversed>INT_MAX/10 || (reversed== INT_MAX/10 && rem>7)) return 0;
            if(reversed<INT_MIN/10 || (reversed== INT_MIN/10 && rem<-8)) return 0;
            reversed=reversed*10 + rem;
         }
        return reversed;
    }
};