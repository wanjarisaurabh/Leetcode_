class Solution {
    public int numSubarraysWithSum(int[] nums, int goal) {

        int n = nums.length ;
        int count = 0;
        for(int i = 0; i< n ; i++){
            int temp =0;
            int j = i;
            while( 0 <= j && temp <= goal){
                temp += nums[j];
                if(temp == goal){
                    count++;
                }
                j--;
            }
        }





        return count;
        
    }
}