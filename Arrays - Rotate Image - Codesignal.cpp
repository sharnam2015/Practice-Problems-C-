std::vector<std::vector<int>> rotateImage(std::vector<std::vector<int>> a) {
vector<vector<int>> op = a;
int i1,i2,i,j=0;
int l = a.size();
for(int i=0;i<l;i++)
{
    for(int j=0;j<l;j++)
    {
        i2 = (l-1)-i;
        i1 = j;
        op[i1][i2] = a[i][j];
    }
}
return op;
}
