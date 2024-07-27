class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int a=nums.size();
        sort(nums.begin(), nums.end());
        
        if(nums[a-1]<target){
            return a;
        }
        for(int i=0;i<a;i++){
            if(nums[i]>=target){
                return i;
            }
        }
        return a;
    }
};