class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int begin = 0, end = numbers.size() - 1;
        while (begin < end) {
            if (numbers[begin] + numbers[end] < target) {
                ++begin;
            } else if (numbers[begin] + numbers[end] > target) {
                --end;
            } else {
                break;
            }
        }
        return vector<int>{begin + 1, end + 1};
    }
};