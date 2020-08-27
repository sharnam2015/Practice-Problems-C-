bool containsDuplicates(std::vector<int> a) {
unordered_set<int> l;
for(int i=0;i<a.size();i++)
{   
    if(l.find(a[i])==l.end())
    {
        l.insert(a[i]);
        //return true;
        //break;
    }
    else{
        return true;
    }
    
}
return false;
}
