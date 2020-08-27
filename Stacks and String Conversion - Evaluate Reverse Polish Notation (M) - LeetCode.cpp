class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        set<string> st;
        st.insert("+");
        st.insert("-");
        st.insert("/");
        st.insert("*");
        
        if(tokens.size()==1)
        {
            return stoi(tokens[0]);
        }
        
        int i = 2;
        stack<int> s;
        
        for(int i=0;i<tokens.size();i++)
        {
            
         if(st.find(tokens[i])!=st.end())
         {
             if(tokens[i]=="+")
             {
                 int x = s.top();
                 s.pop();
                 int y = s.top();
                 s.pop();
                s.push(x+y);
             }
             else if(tokens[i]=="-")
             {
                 int x = s.top();
                 s.pop();
                 int y = s.top();
                 s.pop();
                s.push(y-x);
             }
             else if(tokens[i]=="*")
             {
                 int x = s.top();
                 s.pop();
                 int y = s.top();
                 s.pop();
                s.push(x*y);
             }
             else if(tokens[i]=="/")
             {
                 int x = s.top();
                 s.pop();
                 int y = s.top();
                 s.pop();
                s.push(y/x);
             }
         }
            
        else{
            s.push(stoi(tokens[i]));
        }
            
        }

        
/*
       while(s.size()>0)
        
                if(st.find(tokens[i])!=st.end())
                {
                    if(tokens[i]=="+")
                    {
                        tokens[i-2] = stoi(tokens[i-1])+stoi(tokens[i-2]);
                        tokens.erase(tokens.begin()+i-1);
                        tokens.erase(tokens.begin()+i);
                        i = i-3;
                    }
                    else if(tokens[i]=="-")
                    {
                        tokens[i-2] = stoi(tokens[i-1])-stoi(tokens[i-2]);
                        tokens.erase(tokens.begin()+i-1);
                        tokens.erase(tokens.begin()+i);
                        i = i-3;
                    }
                    else if(tokens[i]=="*")
                    {
                        tokens[i-2] = stoi(tokens[i-1])*stoi(tokens[i-2]);
                        tokens.erase(tokens.begin()+i-1);
                        tokens.erase(tokens.begin()+i);
                        i = i-3;
                    }
                    else if(tokens[i]=="/")
                    {
                        tokens[i-2] = stoi(tokens[i-1])/stoi(tokens[i-2]);
                        tokens.erase(tokens.begin()+i-1);
                        tokens.erase(tokens.begin()+i);
                        i = i-3;
                    }
                }
            i = i+1;
        }
        */
        return s.top();
    }
};
