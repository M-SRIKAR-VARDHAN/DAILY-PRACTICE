class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int a=nums.size();
        int b=a-(k%a);
        reverse(nums.begin(),nums.begin()+b);
        reverse(nums.begin()+b,nums.end());
        reverse(nums.begin(),nums.end());
    }
};