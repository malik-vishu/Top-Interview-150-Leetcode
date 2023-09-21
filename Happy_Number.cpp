//202. Happy Number

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        while(s.count(n)==0){
            s.insert(n);
            int t = 0;
            while(n){
                t += (n%10)*(n%10);
                n /= 10;
            }
            n = t;
        }
        return n == 1;
    }
};
