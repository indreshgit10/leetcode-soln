class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0]>5){
            return false;

        }
        int change5=1;
        int change10=0;
        int change20=0;
        for(int i=1; i<bills.size(); i++){
            if(bills[i]==5){
                change5+=1;
            }
            if(bills[i]==10){
                if(change5>=1){
                change10+=1;
                change5--;
                }
                else return false;
            }
             if(bills[i]==20){
                if((change10>=1 && change5>=1)){
                change20+=1;
                change5--;
                change10--;
                }
                else if((change5>=3)){
                change20+=1;
                change5-=3;
                }
                else return false;
            }
           
        }
        return true;
    }
};