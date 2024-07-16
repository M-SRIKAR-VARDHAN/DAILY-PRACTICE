class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=nums.size();
        int b=0,c=0,d=0;
        for(int i=0;i<a;i++){
            if(nums[i]==0){
                b++;
            }else if(nums[i]==1){
                c++;
            }else if(nums[i]==2){
                d++;
            }
        }
        for(int i=0;i<b;i++){
            nums[i]=0;
        }
        for(int i=b;i<b+c;i++){
            nums[i]=1;
        }
        for(int i=b+c;i<b+c+d;i++){
            nums[i]=2;
        }


    }
};