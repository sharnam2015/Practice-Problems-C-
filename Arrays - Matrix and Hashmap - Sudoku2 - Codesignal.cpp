bool sudoku2(std::vector<std::vector<char>> grid) {
for (int i=0;i<grid.size();i++){
    map<char,int> m1;
    for(int j=0;j<grid[i].size();j++)
    {
        m1[grid[i][j]]+=1;
        if(m1[grid[i][j]]>1 && (grid[i][j]!='.')) return false;
    }
}
    
for (int i=0;i<grid.size();i=i+3){
    
    for(int j=0;j<grid[i].size();j=j+3)
    {   map<char,int> m2;
        m2[grid[i][j]]+=1;
        m2[grid[i][j+1]]+=1;
        m2[grid[i][j+2]]+=1;
        m2[grid[i+1][j]]+=1;
        m2[grid[i+1][j+1]]+=1;
        m2[grid[i+1][j+2]]+=1;
        m2[grid[i+2][j]]+=1;
        m2[grid[i+2][j+1]]+=1;
        m2[grid[i+2][j+2]]+=1;
        for (auto k:m2)
        {
            if(k.second>1 && (k.first!='.')) return false;
        }
     }
}
for(int j=0;j<grid.size();j++)
{   map<char,int> m3;
    for(int i=0;i<grid[j].size();i++)
    {
        m3[grid[i][j]]+=1;
        if(m3[grid[i][j]]>1 && (grid[i][j]!='.')) return false;
    }
}

return true;
}
