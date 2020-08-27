class Solution {
public:
    int t;
    int r;
    int count = 0;
    unordered_set<int> m;
    bool isHappy(int n) {
        //int val = n-(n%10);
        if(m.find(n)!=m.end())
        {
            return false;
        }
        m.insert(n);
        cout<<n;
        if(n==1)
        { 
            return true;
        }
        
       // count = count+1;
        //if(count>30)
        //{
        //    if(n==1)
                //return true;
         //   else
         //       return false;
        //}
        
        int sum = 0;
        while(n!=0)
        {
        r = n%10;
        n = n/10;
        sum = sum +(r*r);
        }
        return isHappy(sum);
    }
};
