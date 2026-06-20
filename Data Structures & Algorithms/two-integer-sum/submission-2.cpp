class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int n = nums.size();
        int right = n-1; 
        while(left!=right){
            while(right>left){
                if(nums[left]+nums[right]==target){
                    return {left,right};
                }else{
                    right--;
                }
            }
            left++;
            right = n-1;
        }
        return {};
    }
};
