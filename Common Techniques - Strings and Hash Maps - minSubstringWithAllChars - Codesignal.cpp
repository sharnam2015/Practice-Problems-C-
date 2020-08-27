std::string minSubstringWithAllChars(std::string s, std::string t) {
string op;
if(t.size()==0)
{return "";}

int min = 10000;
int in1=-1;
int in2=-1;
int flag = 0;

for(int i=0;i<s.size();i++)
{
    unordered_set<char> m1;
    
    for(int j=i;j<s.size();j++)
    {
     m1.insert(s[j]);   
     flag = 0;
     int len = (j+1)-i;
    for(int k=0;k<t.size();k++)
    {
        if(m1.find(t[k])==m1.end())
        {
        flag = 1;
        //break;
        }
    }
    
    if(flag==0)
    {   
        if(len<min)
        {
            min = len;
            in1 = i;
            in2 = j;
            break;
        }
        if(len==min)
        {
            if(i<in1)
            {
                in1 = i;
                in2 = j;
               break;
            }
        }
        break;
    }
    }
}
op = s.substr(in1,((in2+1)-in1));
    return op;
}
