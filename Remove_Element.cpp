//27.Remove Element
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=0;
        int l = nums.size();
        while(j<l){
            if(nums[j]!=val){
                nums[i] = nums[j];
                i++;
            }
            j++;
        }
        return i;
    }
};
