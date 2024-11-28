#include <bits/stdc++.h>
using namespace std;

class Solution {
    void combi(vector<int> &demo, int target, vector<vector<int>> &ans, int idx, vector<int> &candi, int n) {
        if (idx == n) {
            if (target == 0) {
                ans.push_back(demo);
            }
            return;
        }

        if (candi[idx] <= target) {
            demo.push_back(candi[idx]);
            combi(demo, target - candi[idx], ans, idx, candi, n);
            demo.pop_back();
        }

        combi(demo, target, ans, idx + 1, candi, n);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> demo;
        int idx = 0; // Initialize idx
        int n = candidates.size();

        combi(demo, target, ans, idx, candidates, n);

        return ans;
    }
};
