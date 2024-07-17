class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                
                if (result.empty() || result.back() != nums[i]) {
                    result.push_back(nums[i]);
                }
            }
        }
        
        return result;
    }
    
};