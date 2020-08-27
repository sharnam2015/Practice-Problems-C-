class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //int i = nums.size();
        unordered_map <int,int> m;
        for(int i=0;i<nums.size();i++)
        {
         m[nums[i]] = m[nums[i]]+1;
        }
        for(auto i:m)
        {
            if(i.second>(nums.size()/2))
            {
                return i.first;
            }
        }
        return -1;
        
       /* int count = 0;
        int v;
        for(int i=0;i<nums.size();i++)
        {
          for(int j=0;j<nums.size();j++)  
          {
              if(nums[i]==nums[j])
              {count = count+1;}
              if(count>(nums.size()/2))
              {
                  v = nums[j];
                  return v;
                  break;
              }
          }
            count = 0;
        }
        return v;
        */
    }
};
