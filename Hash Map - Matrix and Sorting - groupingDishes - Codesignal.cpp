std::vector<std::vector<std::string>> groupingDishes(std::vector<std::vector<std::string>> dishes) {
    vector<vector<string>> op;
    map<string,vector<string>> m2;
    
for (int i=0;i<dishes.size();i++)
{   
    for(int j=1;j<dishes[i].size();j++)
    {
        m2[dishes[i][j]].push_back(dishes[i][0]);
    }
}
for (auto p : m2)
{
    if(p.second.size()>1)
    {
    sort(p.second.begin(),p.second.end());
    p.second.insert(p.second.begin(),p.first);
    op.push_back(p.second);
    }
}
sort(op.begin(),op.end());
return op;

}
