class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
                int n = nums.size();

        vector<int>ans(n);

        stack<int>st;

        
        for (int i = n * 2 - 1; i >= 0; i--) {

            while (!st.empty() && st.top() <= nums[i % n]) {
                st.pop();

            }

            if (st.empty()) {
                if (i < n) {
                    ans[i] = -1;
                }
            }
            else {
                if(i < n) {
                ans[i] = st.top();

                }

            }





            st.push(nums[i % n]);
        }



        return ans;
    }
};