class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int max =0;
        int count = 1;
        if(nums.size()==0)
        {
            return 0;
        }
        for(int i =0;i<nums.size();i++)
        {
            count = 1;
            
            for(int j = i;j<nums.size()-1;j++)
            {
                if(nums[j+1]>nums[j])
                {
                 count = count+1;   
                }
                else
                {
                    break;
                }
            }
            if(count>max)
            {
                max = count;
                
            }
            if(max>nums.size()-i)
                {
                    break;
                }
        }
        return max;
        
    }
};
