class Solution {
    //it have tow method using bit , and second is useing recursion 
    //we we use recursion 
    //lena hai nai lena hai 
    public:
    vector<vector<int>>ans;
    void sub(vector<int> &nums , int i , vector<int> temp){
if(i == nums.size()){
    ans.push_back(temp);
    return;
}


sub(nums, i+1 , temp);
temp.push_back(nums[i]);
sub(nums, i+1 , temp);

    }

    

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        sub(nums, 0 , temp);
        return ans;

    }
};