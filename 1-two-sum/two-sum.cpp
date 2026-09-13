class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        vector<int> new_nums = nums;
        sort(new_nums.begin(), new_nums.end());
        int begin = 0, end = nums.size() - 1;
        while (begin < end) {
            if (new_nums[begin] + new_nums[end] < target) {
                ++begin;
            } else if (new_nums[begin] + new_nums[end] > target) {
                --end;
            } else {
                for (size_t i = 0; i < nums.size(); ++i) {
                    if ((nums[i] == new_nums[begin]) || (nums[i] == new_nums[end])) {
                        answer.push_back(i);
                    }
                }
                end = -1;
            }
        }
        return answer;
    }
};