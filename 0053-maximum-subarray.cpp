#include<algorithm>
 class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {  
        int n = nums.size();
        int currsum =nums[0] , maxsum=nums[0];
        for (int i=1; i< n ; i++)
        {
            currsum= max(nums[i] ,   currsum + nums[i]); // مهم 
           maxsum= max(  maxsum , currsum);
        }

       return maxsum ;  
    }
};
