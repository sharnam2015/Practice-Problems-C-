char firstNotRepeatingCharacter(std::string s) {
unordered_map<char,int> m;
for(int i=0;i<s.size();i++)
{
    m[s[i]] = m[s[i]]+1;
}
for(int j=0;j<s.size();j++)
{
    if(m[s[j]]==1)
    {
        return s[j];
    }
}
return '_';
}
