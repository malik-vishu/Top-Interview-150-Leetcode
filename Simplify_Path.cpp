//71. Simplify Path
class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        
        for(int i = 0;i<path.length();i++){
            if(path[i] == '/')
                continue;
            string t;
            while(i!=path.length() && path[i]!='/'){            
                t+=path[i];
                i++;
            }
            if(t == ".") continue;
            
            else if(t == ".."){
                if(!st.empty()){
                    st.pop();
                }
            }
            else st.push(t);
        }

        string ans;
        while(!st.empty()){
            ans = "/" + st.top() + ans;
            st.pop();
        }
        if(ans.length() == 0) return "/";
        return ans;
    }
};
