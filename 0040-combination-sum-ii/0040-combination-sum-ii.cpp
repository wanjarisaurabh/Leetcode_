class Solution
{

    void combi(vector<vector<int>> &ans, int ind, vector<int> &arr, vector<int> demo, int target)
    {

        if (target == 0)
        {
            ans.push_back(demo);
            return ;
        }

        for (int i = ind; i < arr.size(); i++)
        {
            if (i > ind && arr[i] == arr[i - 1])
                continue;
            if (arr[i] > target)
                break;
            demo.push_back(arr[i]);
            combi(ans, i + 1, arr, demo, target - arr[i]);
            demo.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidate, int target)
    {
        sort(candidate.begin(), candidate.end());
        vector<vector<int>> ans;
        vector<int> demo;
        int idx = 0;
        combi(ans, 0, candidate, demo, target);

        return ans;
    }
};