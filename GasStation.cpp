class Solution {
    public:
        int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
            int total_tank=0, current_tank=0, start_index=0;
            for(int i=0;i<gas.size();i++)
            {
                total_tank+=gas[i]-cost[i];
                current_tank+=gas[i]-cost[i];
                if(current_tank<0)
                {
                    start_index=i+1;
                    current_tank=0;
                }
            }
            return (total_tank>=0) ? start_index: -1;
        }
    };