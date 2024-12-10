class Solution {
public:
    string removeKdigits(string num, int k) {
        if (k >= num.length()) return "0"; // If k >= num.length(), return "0" as the smallest result.
        
        string ans = ""; // Use this as a dynamic result (like a stack).

        for (char ch : num) {
            // Remove characters from the end of `ans` if they are larger than the current character
            // and we still need to remove `k` digits.
            while (!ans.empty() && k > 0 && ans.back() > ch) {
                ans.pop_back();
                k--;
            }
            // Append the current character.
            ans.push_back(ch);
        }

        // If there are still digits to remove, remove from the end.
        while (k > 0 && !ans.empty()) {
            ans.pop_back();
            k--;
        }

        // Remove leading zeros.
        int start = 0;
        while (start < ans.size() && ans[start] == '0') {
            start++;
        }
        ans = ans.substr(start);

        // Return "0" if the result is empty.
        return ans.empty() ? "0" : ans;
    }
};
