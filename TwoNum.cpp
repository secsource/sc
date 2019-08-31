class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        size_t len = nums.size();
        for(size_t i=0;i<len-1;++i){
            for (size_t j=i+1;j<len;++j){
                if (nums[i]+nums[j]==target) {
                    vector<int> v {i,j};
                    return v;
                }
            }
        }
    }
};
