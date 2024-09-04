class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        // Loop through the array to count the number of drops (decreasing points)
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
            // If there is more than one drop, the array cannot be rotated sorted
            if (count > 1) {
                return false;
            }
        }
        
        return true; // Return true if at most one drop is found
    }
};