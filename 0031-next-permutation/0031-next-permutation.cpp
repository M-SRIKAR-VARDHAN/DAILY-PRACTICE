class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        int x=-1;
        int y=-1;
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                x=i-1;
                break;
            }
        }
        if (x == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
          for(int i=n-1;i>0;i--){
            if(nums[i]>nums[x]){
                y=i;
                break;
            }
        }
        swap(nums[x],nums[y]);
        reverse(nums.begin() +x+1, nums.end());


    }
};