#include <vector>
#include <unordered_map>

class Solution {
public:
    int subarraysDivByK(std::vector<int>& nums, int k) {
        int n = nums.size();
        int prefsum = 0, ans = 0;
        std::unordered_map<int, int> prevOcc;
        prevOcc[0] = 1;
        
        for (int i = 0; i < n; i++) {
            prefsum = (prefsum + nums[i] % k + k) % k;
            ans += prevOcc[prefsum];
            prevOcc[prefsum]++;
        }
        
        return ans;
    }
};
