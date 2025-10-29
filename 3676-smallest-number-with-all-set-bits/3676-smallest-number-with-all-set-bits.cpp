class Solution {
public:
    int smallestNumber(int n) {
       
       while(n){
           bool rem0= false;
           int x=n;
           while(x){
            int r= x%2;
            if( r== 0) rem0=true;
            x/=2;
           }
           if(rem0== false) return n;
           n++;
       }
         return INT_MAX;
    }
};