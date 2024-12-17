class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlength =0;
        int zeros = 0;
       int left =0;
        int n = nums.size();

        for(int r = 0 ; r < n ; r++){

            if(nums[r] == 0){
                zeros++;
            }
            if( zeros > k ){
                if(nums[left] == 0) zeros--;

                left++;
            }
            if(zeros <= k ){
                int len = r- left +1 ;
                maxlength = max(maxlength, len);
            }

        }

        return maxlength;
        
    }
};