class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int a=nums.size();
        int b= ((a)*(a+1))/2;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        return b-sum;
    }
};