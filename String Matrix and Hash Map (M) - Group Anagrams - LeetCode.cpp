class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     
        vector<string> s;
        for(int i=0;i<strs.size();i++)
        {
            s.push_back(strs[i]);
        }
        
        for(int j=0;j<s.size();j++)
        {
            sort(s[j].begin(), s[j].end());
            //cout<<s[j];
        }
        
        unordered_map<string,int>m;
        vector<vector<string>> op;
        int c =0;
        
        for(int k=0;k<s.size();k++)
        {   vector<string> st;
            //st.resize(0);
            st.clear();
         c = 0;
            for(int u=k;u<s.size();u++)
            {
            if(s[k]==s[u] && s[u]!="2")
            {
                //cout<<strs[u];
                st.push_back(strs[u]);
                c=c+1;
                cout<<strs[u];
                if(c>1){
                s[u] = "2";
                }
            }
            }
            if(st.size()>0)
            {
            op.push_back(st);}
        }
    
    return op;}
    
};
