class Solution {
    string say(int n) {
        if (n == 1) return "1";
        string ans = "";

        string temp = say(n - 1);
        int cnt = 0;
        for (int i = 0; i < temp.size(); i++) {
            cnt++;
            if (i == temp.size() - 1 || temp[i] != temp[i + 1]) {
                ans += to_string(cnt) + temp[i]; // Convert cnt to string before concatenation
                cnt = 0;
            }
        }
        return ans;
    }

public:
    string countAndSay(int n) {
        return say(n);
        
    }
};