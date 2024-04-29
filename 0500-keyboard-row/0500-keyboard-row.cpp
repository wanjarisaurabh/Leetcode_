#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        string row1 = "qwertyuiopQWERTYUIOP";
        string row2 = "asdfghjklASDFGHJKL";
        string row3 = "zxcvbnmZXCVBNM";

        for (int i = 0; i < words.size(); i++) {
            int arr[3] = {0, 0, 0}; // Reset array for each word

            string tem = words[i];
            for (char c : tem) {
                if (row1.find(c) != string::npos) arr[0] = 1;
                if (row2.find(c) != string::npos) arr[1] = 1;
                if (row3.find(c) != string::npos) arr[2] = 1;
            }

            int sum = arr[0] + arr[1] + arr[2];
            if (sum == 1) {
                ans.push_back(tem);
            }
        }

        return ans;
    }
};
