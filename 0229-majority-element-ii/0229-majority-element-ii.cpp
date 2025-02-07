class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> p;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int sum=1;
         for(int i = 1; i < n; i++) {
            if (nums[i] == nums[i-1]) {
                sum++;
            } else {
                if (sum > n / 3) {
                    p.push_back(nums[i-1]);
                }
                sum = 1;  
            }
        }
        if (sum > n / 3) {
            p.push_back(nums[n-1]);
        }
        return p;
    }
};