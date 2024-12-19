class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int maxsum =0, rsum =0 , lsum =0;
        for(int i  =0 ; i< k ; i++){
            rsum += nums[i];
        }
        maxsum = rsum ;
        for(int i  = 1 ; i <= k ; i++){

            rsum -= nums[k-i];
            lsum += nums[nums.size()-i];

            maxsum = max(maxsum , rsum+ lsum);
        }

        return maxsum;
        
    }
};