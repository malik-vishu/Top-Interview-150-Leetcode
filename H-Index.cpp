//274. H-Index
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int i = 0;
        int n = citations.size();
        sort(citations.begin(),citations.end());
        for(;i<n;i++){
            if(citations[n-i-1]<i+1)
                break;
        }
        return i;
    }
};
