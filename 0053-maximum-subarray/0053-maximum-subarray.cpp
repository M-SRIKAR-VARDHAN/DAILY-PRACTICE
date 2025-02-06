class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int x=nums[0];
        int n=nums.size();
        int sum=nums[0];
        for(int i=1;i<n;i++){
            x = max(nums[i], x + nums[i]); 
            sum = max(sum, x); 
           
        }

        return sum;
    }
};