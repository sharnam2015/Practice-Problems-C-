map<int,vector<int>> m;
for (int i=0;i<nums.size();i++)
{
    m[nums[i]].push_back(i);
}
for(auto t:m)
{
    if(t.second.size()>1)
    {
        sort(t.second.begin(),t.second.end());
        for (int u=0;u<t.second.size()-1;u++)
        {
            if(t.second[u+1]-t.second[u]<=k) 
            {return true;}
        }
    }
}
return false;
}
