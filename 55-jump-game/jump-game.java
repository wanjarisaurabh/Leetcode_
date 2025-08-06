class Solution {
    public boolean canJump(int[] nums) {
        int n = nums.length ;
        int maxi  = 0;

        for(int i = 0 ; i < n-1 ; i++){
            int demo = i + nums[i];

            if(i == 0 || maxi >= i){
                if(maxi < demo){
                    maxi = demo;
                }

            }

        }

        return maxi >= n -1;
        
    }
}


/*
using greedy 
-- don't need to go and see all 
just calculate 
 cur_ind + curr_val < max




*/