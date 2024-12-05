class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1); // Initialize the answer vector with -1
        stack<int> st;         // Stack to store indices for comparison

        for (int i = n * 2 - 1; i >= 0; i--) {
            // Ensure the stack contains only elements greater than the current element
            while (!st.empty() && nums[st.top()] <= nums[i % n]) {
                st.pop();
            }

            // Store the result for the current index if within the original range
            if (i < n && !st.empty()) {
                ans[i] = nums[st.top()];
            }

            // Push the current index onto the stack
            st.push(i % n);
        }

        return ans;
    }
};
