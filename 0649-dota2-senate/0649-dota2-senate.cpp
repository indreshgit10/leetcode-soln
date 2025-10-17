class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> r;
        queue<int> d;

        for(int i=0; i<senate.size();i++){
            if(senate[i]=='R') r.push(i);
            else d.push(i);
        }


        while(r.size() && d.size()){
            if(r.front()<d.front()){
                d.pop();
                int x=r.front();
                r.pop();
                r.push(x+senate.size());
            }
            else{
                  r.pop();
                int x=d.front();
                d.pop();
                d.push(x+senate.size());

            }
        }

            if(r.size()) return "Radiant";
            else return "Dire";

        
    }
};