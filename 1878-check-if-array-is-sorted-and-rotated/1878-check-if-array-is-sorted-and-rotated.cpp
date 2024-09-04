class Solution {
public:
    bool check(vector<int>& nums) {
        int a=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]){
                a=i+1;
                break;
            }
        }
        if(a==0){
            return true;
        }
        for(int i=a;i<nums.size()-1;i++){
            if(!(nums[i+1]>=nums[i])){
                return false;
            }
        }
        if(nums.back()>nums[0]){
            return false;
        }
        return true;

    }
};