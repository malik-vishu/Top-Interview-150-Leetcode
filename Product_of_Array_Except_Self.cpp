//238. Product of Array Except Self
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> t(nums.size(),0);
        int p = 1;
        t[0] = nums[0];
        for(int i = 0;i<nums.size()-1;i++){
            t[i+1] = t[i]*nums[i+1];
        }
        
        for(int i = nums.size()-1;i>0;i--){
            t[i] = p*t[i-1];
            p *= nums[i];
        }
        t[0] = p;
        return t;
    }
};
