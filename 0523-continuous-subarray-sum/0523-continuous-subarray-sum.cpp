#include <vector>
#include <unordered_map>

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int prefsum=0;
        unordered_map<int , int> firstOcc;
        firstOcc[0]=0;
        for(int i=0;i<n;i++){
            prefsum= (prefsum+nums[i])%k;
            if(firstOcc.find(prefsum)!=firstOcc.end()){
                if(i+1 - firstOcc[prefsum]>=2) return true;
            }
            else{
                firstOcc[prefsum]=i+1;
            }

        }
        return false;
    }

    };
