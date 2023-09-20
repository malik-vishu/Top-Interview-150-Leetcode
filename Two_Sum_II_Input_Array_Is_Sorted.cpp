//167. Two Sum II - Input Array Is Sorted
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0,j = n-1;
        while(i<j){
            if(numbers[i]+numbers[j]==target){
                return {++i,++j};
            }
            if(numbers[i]+numbers[j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return {};
    }
};
