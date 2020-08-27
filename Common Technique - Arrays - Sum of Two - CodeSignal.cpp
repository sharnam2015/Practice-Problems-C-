bool sumOfTwo(std::vector<int> a, std::vector<int> b, int v) {

sort(a.begin(),a.end());
sort(b.begin(),b.end());
//if(v>(a[a.size()-1]+(b[b.size()-1])))
//{
//    return false;
//}
int av1 = 0;
int av2 = 0;
if((!a.empty()) && (!b.empty()))
{
int min = a[0]+b[0];
if(v<min)
{
    return false;
}
int max = a[a.size()-1]+(b[b.size()-1]);
if(v>max)
{
    return false;
}
int av1  = a[0]+a[a.size()-1];
int av2 = b[0]+b[b.size()-1];
int sq1 = 0;
int sq2 = 0;
sq1 = abs(av1-v);
sq2 = abs(av2-v);
if(sq2<=sq1)
{
for(int i=0;i<b.size();i++)
{
    
        if((b[i]+a[0])<=v && v<=b[i]+a[a.size()-1])
        {
            for(int j=0;j<a.size();j++)
            {
                if(a[j]+b[i]==v)
                {
                    return true;
                }
            }
        }
}
}
else if(sq1<sq2)
{
    for(int i=0;i<a.size();i++)
{
    
        if((a[i]+b[0])<=v && v<=a[i]+b[a.size()-1])
        {
            for(int j=0;j<b.size();j++)
            {
                if(b[j]+a[i]==v)
                {
                    return true;
                }
            }
        }
}
}
return false;
}
else 
{
    return false;
}

}
