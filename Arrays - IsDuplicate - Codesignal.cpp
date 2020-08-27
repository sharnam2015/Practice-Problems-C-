int firstDuplicate(std::vector<int> a) {
unordered_set<int> m1;
//int imin = 10000000;
//int c = 0;
int r = -1;
//m1[3] = m1[3]+1;
//cout<<m1[3];
for(int i=0;i<a.size();i++)
{
    if(m1.find(a[i])!=m1.end())
    {
        r = a[i];
        return r; 
    }
    
    m1.insert(a[i]);
    //if(m1[a[i]]>=2)
    //{
     //   r = a[i];
     //   break;
    //}
}
return r;
}
