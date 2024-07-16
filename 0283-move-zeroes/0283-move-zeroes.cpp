class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a=nums.size();
        int count=0,k=0;
        for(int i=0;i<a;i++){
            if(nums[i]==0){
                count++;
            }else{
                nums[k]=nums[i];
                k++;
            }
        }
        int x=a-count;
        for(x;x<a;x++){
            nums[x]=0;
        }
    }
};