class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostK(nums, k) - atMostK(nums, k - 1);
    }
    
private:
    int atMostK(vector<int>& nums, int k) {
        int count = 0, left = 0;
        unordered_map<int, int> freq;
        for (int right = 0; right < nums.size(); ++right) {
            // Add current element to the frequency map
            freq[nums[right]]++;
            
            // If distinct elements exceed k, shrink the window
            while (freq.size() > k) {
                freq[nums[left]]--;
                if (freq[nums[left]] == 0) {
                    freq.erase(nums[left]);
                }
                ++left;
            }
            
            // Count subarrays in the current valid window
            count += right - left + 1;
        }
        return count;
    }
};
