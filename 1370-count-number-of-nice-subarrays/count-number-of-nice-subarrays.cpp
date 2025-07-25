class Solution {

    int find(vector<int>& arr, int goal) {
        long long sum = 0;  // Change sum to long long to handle large numbers
        int left = 0;
        int count = 0;  // Count of valid subarrays

        for (int r = 0; r < arr.size(); r++) {
            
             // Iterate within bounds
            sum += arr[r] % 2;

            // Shrink the window until the sum is <= goal
            while (sum > goal && left <= r) {
                  // Ensure left does not exceed r
                sum -= arr[left] % 2;
                left++;
            }

            // Add the number of subarrays ending at r
            count += (r - left + 1);  // Only valid when left <= r
        }
        return count;
    }

    int numSub(vector<int>& nums, int goal) {
        if(goal < 0)return 0;
        return find(nums, goal) - find(nums, goal - 1);
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return numSub(nums,k);
    }
};


// tc - 0 (n)
//finding total suarray who is <= k and <= k -1 
//then k - (k -1) give us the k array 