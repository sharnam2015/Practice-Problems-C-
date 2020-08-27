class Solution {
public:
    //unordered map<int,
    vector<string> letterCombinations(string digits) {
        vector<string> list;
        queue<string> q;
        q.push("");
        string table[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int l = digits.length();
        string s = q.front();
        //cout<<s.length();
        
        while(!q.empty()){
            string s = q.front();
            q.pop();
            if(s.length()==l)
            {
                list.push_back(s);
            }
            else
            {
                for(auto al : table[((int)digits[s.length()])-48])
                {
                    q.push(s+al);
                }
            }
        }
        
        return list;
        
    }
};
