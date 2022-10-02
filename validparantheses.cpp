class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]==')'||s[i]=='}'||s[i]==']') && st.empty())
                return false;
            else if(s.size()%2!=0)
                return false;
            
            else if(s[i]=='('||s[i]=='{'||s[i]=='[')
             {
                st.push(s[i]);
                 
             }
            else
            {
                if(s[i]==')')
                {
                    if(st.top()=='(')
                        st.pop();
                    else
                        return false;
                }
                 if(s[i]==']')
                {
                    if(st.top()=='[')
                        st.pop();
                    else
                        return false;
                }
                 if(s[i]=='}')
                {
                    if(st.top()=='{')
                        st.pop();
                    else
                        return false;
                }
            }
            
        }
        if(st.empty())
        return true;
        else
            return false;
        
    }
};