class Solution {
public:
    int characterReplacement(string s, int k) {

        int n = s.length();
        int ans = 0, maxCount = 0, left = 0;
        int maxlen = 0;
        unordered_map<char, int> mp;
        for (int right = 0; right < n; right++) {
            mp[s[right]]++;

            maxCount = max(maxCount, mp[s[right]]);

            if (right - left + 1 - maxCount > k) {
                mp[s[left]]--;
                left++;
            }

            if (right - left + 1 - maxCount <= k) {

                maxlen = max(maxlen, right - left + 1);
            }
        }

        return maxlen;
    }
};
