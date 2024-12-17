class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlength = 0; // Final answer to store the maximum length
        vector<int> ans(256, -1); // To store the last index of each character
        int n = s.length();

        int left = 0; // Start of the sliding window
        for (int right = 0; right < n; right++) { // End of the sliding window
            // If the character is already in the current window
            if (ans[s[right]] >= left) {
                left = ans[s[right]] + 1; // Move the left pointer past the duplicate
            }

            ans[s[right]] = right; // Update the last seen index of the character
            maxlength = max(maxlength, right - left + 1); // Update the maximum length
        }

        return maxlength;
    }
};
