class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int first = 0, last = nums.size() - 1, tmp = 0;
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        ans.reserve(last);
        for (int i = 0; i < nums.size(); ++i) {
            if (i > 0) {
                while (i < nums.size() && nums[i] == nums[i - 1]) {
                    ++i;
                }
            }
            if (i == nums.size()) {
                break;
            }
            tmp = -nums[i];
            first = i + 1;
            last = nums.size() - 1;
            while (first < last) {
                if (nums[first] + nums[last] < tmp) {
                    ++first;
                } else if (nums[first] + nums[last] > tmp) {
                    --last;
                } else {
                    ans.push_back({-tmp, nums[first], nums[last]});
                    while (first < nums.size() && nums[first] + nums[last] == tmp) {
                        ++first;
                    }
                }
            }
        }
        return ans;
    }
};