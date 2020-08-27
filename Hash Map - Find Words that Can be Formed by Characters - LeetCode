class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map <char,int> m1;
        
        for(int j=0;j<chars.size();j++)
        {
         m1[chars[j]] = m1[chars[j]]+1;   
        }
        int sum = 0;
        
        for(int u =0;u<words.size();u++)
        {
         int flag = 1;
        unordered_map <char,int> m2 = m1;
        for(int k=0;k<words[u].size();k++)
        {
            if(m2.find((words[u])[k])!=m2.end() && m2[words[u][k]]>0)
            {
                m2[words[u][k]] = m2[words[u][k]] -1;
            }
            else {
                flag = 0;
                break;
            } 
        }
            if(flag==1)
            {
                sum = sum+words[u].size();
                cout<<words[u];
            }
        }
        return sum;
    }
    
};
