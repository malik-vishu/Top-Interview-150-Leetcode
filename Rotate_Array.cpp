//189. Rotate Array
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(),nums.end());
        for(int i = 0;i<k/2;i++){
            swap(nums[i],nums[k-1-i]);
        }
        int j = n-1;
        int i = k;
        for(int l = 0;l<(n-k)/2;l++){
            swap(nums[i++],nums[j--]);
        }
    }
};
