class Solution {
    public int[] nextGreaterElements(int[] nums) {
        int[] ans = new int[nums.length];
        Stack<Integer> st = new Stack<>();
        int n = nums.length;
        int m = n * 2;
        for (int i = m - 1; i >= 0; i--) {
            int j = i % n;
            while (!st.isEmpty() && st.peek() <= nums[j]) {
                st.pop();
            }
            if (j < n) {
                if (st.isEmpty()) {
                    ans[j] = -1;
                } else {
                    ans[j] = st.peek();
                }
            }
            st.push(nums[j]);
        }

        return ans;
    }
}