//383. Ransom Note
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mpM;
        for(int i = 0;i<magazine.length();i++){
            mpM[magazine[i]]++;
        }
        for(int i = 0;i<ransomNote.length();i++){
            mpM[ransomNote[i]]--;
        }
        for(auto i:mpM){
            if(i.second<0) return false;
        }
        return true;
    }
};
