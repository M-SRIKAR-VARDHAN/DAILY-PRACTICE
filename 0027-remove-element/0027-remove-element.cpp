class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         int n = nums.size();
        int i = 0;
        int j = n - 1;
        int count = 0;

        while (i <= j) {
            if (nums[j] == val) {
                j--;
                count++;
            } else if (nums[i] == val) {
                swap(nums[i], nums[j]);
                count++;
                i++;
                j--;
            } else {
                i++;
            }
        }

        return n - count;
    }
};