//3.Longest Substring Without Repeating Characters
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int c = 0,res = 0;
        for(int i = 0;i<s.length();i++){
            map<char,int> mp;
            for(int j = i;j<s.length();j++){
                if(mp.find(s[j])!= mp.end()){
                    break;
                }
                else{
                    mp[s[j]]++;
                    c++;
                }
            }
            res = max(res,c);
            c = 0;
        }
        return res;
    }
};
