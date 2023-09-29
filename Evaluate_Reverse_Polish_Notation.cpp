//150. Evaluate Reverse Polish Notation
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+"  && tokens[i]!="-"&& tokens[i]!="*"&& tokens[i]!="/"){
                s.push(stoi(tokens[i]));
            }
            else{
                long long a=s.top();
                s.pop();
                long long b=s.top();
                s.pop();
                if(tokens[i]=="+")
                s.push(b+a);
                else if(tokens[i]=="-")
                s.push(b-a);
                else if(tokens[i]=="*")
                s.push(b*a);
                else 
                s.push(b/a);
            }
        }
        return s.top();
    }
};
