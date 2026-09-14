class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1, tmp, ans = 0;
        while (left < right) {
            tmp = (right - left) * std::min(height[right], height[left]);
            if (ans < tmp) {
                ans = tmp;
            }
            if (height[left] < height[right]) {
                ++left;
            } else {
                --right;
            }
        }
        return ans;
    }
};