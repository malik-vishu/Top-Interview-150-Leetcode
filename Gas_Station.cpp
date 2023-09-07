//134. Gas Station

#include<numeric>
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int current = 0, tfuel = 0, tcost = 0, start = 0;
        int gSum = accumulate(gas.begin(),gas.end(),0);
        int cSum = accumulate(cost.begin(),cost.end(),0);

        if(gSum < cSum) return -1;

        for(int i = 0;i<gas.size();i++){
            current += gas[i] - cost[i];
            if(current<0){
                start = i+1;
                current = 0;
            }
        }
        return start;
    }
};
