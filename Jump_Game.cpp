//55. Jump Game
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int p = nums.size()-1;
        for(int i = nums.size()-1;i>=0;i--){
            if(nums[i]+i>=p){
                p = i;
            }
        }
        if(p==0)
            return true;
        else
            return false;
    }
};
