
class Solution {

     int beaut(string s) {
        int ans = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0);
            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;

                int minFreq = getMin(freq);
                int maxFreq = getMax(freq);

                int beauty = maxFreq - minFreq;

                ans += beauty;
            }
        }
        return ans;
    }

      int getMax(const vector<int>& freq) {
        int maxFreq = INT_MIN;
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0)
                maxFreq = max(maxFreq, freq[i]);
        }
        return maxFreq;
    }

    int getMin(const vector<int>& freq) {
        int minFreq = INT_MAX;
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0)
                minFreq = min(minFreq, freq[i]);
        }
        return minFreq;
    }

public:
    int beautySum(string s) {
        return beaut(s);
    }
};