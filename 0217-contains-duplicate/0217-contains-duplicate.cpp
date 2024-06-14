#include <unordered_set>
#include <vector>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;

        for(int num : nums) {
            if(seen.count(num) > 0) {//it only check how many times the nuber apperas 
                return true;
            }
            seen.insert(num);
        }

        return false;
    }
};
