//169.Majority Element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int t = nums.size()/2;
        int cnt = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            cnt = 1;
            while(i+1 < nums.size() && nums[i] == nums[i+1]){
                cnt++;
                i++;
            }
            if(cnt > t) return nums[i];
        }
        return -1;
    }
};
