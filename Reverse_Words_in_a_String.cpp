//151. Reverse Words in a String

class Solution {
public:
    string reverseWords(string s) {
        string t = "";
        int j = s.length()-1;
        unordered_map<int,string> mp;
        for(int i = 0;i<s.length();i++){
            while(i!= s.length() && s[i]==' '){
                i++;
            }
            while(i!=s.length() && s[i]!=' '){
                t+=s[i];
                i++;
            }
            mp[j] = t;
            j--;
            t = "";
        }
        string ans = "";
        for(int i = 0;i<s.length();i++){
            while(i!=s.length() && mp[i]=="") i++;
            if(i!=s.length())
                ans += mp[i];
            if(i+1!=s.length()){
                ans += " ";
            }
        }
        return ans;
    }
};
