//
// Binary trees are already defined with this interface:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };

int flag =0;
bool hasPathWithGivenSum(Tree<int> * t, int s) {

    if(t == NULL) return false;
    if(t->left == NULL && t->right == NULL)
        if(s == t->value) flag = 1;
        
    hasPathWithGivenSum(t->left,(s-(t->value)));
    hasPathWithGivenSum(t->right,(s-(t->value)));    

    if(flag == 1) return true;
    else return false;

}
