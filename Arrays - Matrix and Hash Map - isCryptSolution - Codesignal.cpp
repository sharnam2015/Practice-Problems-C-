bool isCryptSolution(std::vector<std::string> crypt, std::vector<std::vector<char>> solution) {

unordered_map<char,int> m1;
for(int j=0;j<solution.size();j++)
{
    m1[solution[j][0]]=(solution[j][1]-'0');
}
//cout<<solution[1][1];

int num1 = -1;
int num2 = -1;
int num3 = -1;
int l1 = crypt[0].size();
int l2 = crypt[1].size();
int l3 = crypt[2].size();
int add1= 0;
int add2=0;
int add3 = 0;
if((m1[crypt[0][0]]==0||m1[crypt[1][0]]==0||m1[crypt[2][0]]==0)&&(l1>1)&&(l1>1)&&(l3>1))
{
    return false;
 //   cout<<10;
}
//cout<<pow(10,(l1-1));
for(int i=0;i<crypt[0].size();i++){
add1 = add1 + (m1[crypt[0][i]]*((int)pow(10,(l1-(i+1)))));
}
for(int k=0;k<crypt[1].size();k++){
add2 = add2 + (m1[crypt[1][k]]*((int)pow(10,(l2-(k+1)))));
}
for(int u=0;u<crypt[2].size();u++){
add3 = add3 + (m1[crypt[2][u]]*((int)pow(10,(l3-(u+1)))));
}
if(add3==(add1+add2))
{
    return true;
}
else 
{
    //cout<<100;
    return false;
}
}
