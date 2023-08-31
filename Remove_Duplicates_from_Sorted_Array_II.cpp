//80. Remove Duplicates from Sorted Array II
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ind = 0;
        for(int i = 0;i<nums.size();i++){
            if(i==0||i==1||nums[i]!=nums[ind-2]){
                nums[ind]=nums[i];
                ind++;
            }
        }
        return ind;
    }
};
