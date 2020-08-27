class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int ap=0;
        if(flowerbed.size()<=1){
            if(flowerbed[0]==0)
            {
                ap = ap+1;
            }
        }
        if(flowerbed.size()>1){
        if(flowerbed[0]==0)
        {if(flowerbed[1]==0)
        {
            ap = ap+1;
            flowerbed[0]=1;
        }
            
        }
            
            
        for(int j=1;j<flowerbed.size()-1;++j)
        {
            if(flowerbed[j]==0 && flowerbed[j-1]==0 && flowerbed[j+1]==0)
            {
                ap = ap+1;
                flowerbed[j] = 1;//remember making it as 1
            }
        }
       // cout<<ap;
         if(flowerbed[flowerbed.size()-1]==0)
        {
             if(flowerbed[flowerbed.size()-2]==0)
        {
            ap = ap+1;
        }
            
        }
        }
        if(ap>=n)
        {
            return true;
        }
        
        else
        {
    return false;
        }
    }
};
