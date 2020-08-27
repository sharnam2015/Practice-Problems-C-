// Singly-linked lists are already defined with this interface:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };
//
bool isListPalindrome(ListNode<int> * l) {
vector<int> a;
int i = 0;
while(l!=NULL)
{
    a.push_back(l->value);
    l=l->next;
    //i=i+1;
}
cout<<(a.size());
for(int u=0;u<a.size();u++)
{   int k = a.size()-(1+u);
    //cout<<a[u];
    if(a[u]!=a[k])
    {
        return false;
    }
}
return true;
}
