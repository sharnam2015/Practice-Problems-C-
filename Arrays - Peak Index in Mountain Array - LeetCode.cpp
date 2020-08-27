class Solution {
public:
    int max = 0;
    int maxc = -1;
    int peakIndexInMountainArray(vector<int>& A) {
        for(int i=0;i<A.size();i++)
        {
         if(max<A[i])
         {
             max = A[i];
             maxc=i;
         }
        }
        return maxc;
    }
};
