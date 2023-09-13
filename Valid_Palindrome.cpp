//125.Valid Palindrome
class Solution {
public:
    bool isPalindrome(string s) {
        string small="";
        int n = s.size();
        for(int i = 0;i<n;i++){
            if(s[i] >= 65 && s[i] <= 90){
                small += s[i]+32; 
            }
            else if(s[i] >= 97 && s[i] <= 122 ){
                small += s[i];
            }
            else if(s[i]>='0' && s[i]<='9')
                small += s[i];
        }
        n = small.size();
        for(int i = 0;i<n/2;i++){
            if(small[i] != small[n-1-i]){
                return false;
            }
        }
        return true;
    }
};
