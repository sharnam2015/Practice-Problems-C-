class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        if(s.size()!=t.size())
        {
            return false;
        }
         for(int i =0;i<s.size();i++)
         {
             m1[s[i]]=m1[s[i]]+1;
         }
        for(int j =0;j<t.size();j++)
        {
            m2[t[j]]=m2[t[j]]+1;
        }
        for(auto k:m2)
        {
            auto it = m1.find(k.first);
            if(it==m1.end())
            {return false;}
            if(it->second!=k.second)
            {
                return false;
            }
        }
        return true;
    }
};
