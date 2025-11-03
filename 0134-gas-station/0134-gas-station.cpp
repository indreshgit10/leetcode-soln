class Solution {
public:
    

    int solve(vector<int>& gas, vector<int>& cost, int starting){
       int fuel=0;

       for(int i=starting; i<gas.size(); i++){
              fuel+=gas[i];
              if(fuel<cost[i]) return -1;
              fuel-=cost[i];

       }

       for(int i=0; i<starting; i++){
           
           fuel+=gas[i];
              if(fuel<cost[i]) return -1;
              fuel-=cost[i];

       }
       return starting;

    }


    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int starting =0;
               if(gas.size() ==1 && cost.size()==1 && gas[0]==cost[0]) return starting;


        for(int i=0; i<gas.size(); i++){
            if(cost[i]<gas[i]){
                starting =i;
                int result=solve(gas, cost, starting);
                if(result!=-1) return result;
                
            }
        }
        return -1;
        
    }
};