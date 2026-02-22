class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int n = nums.size();
        long long diff = 0;
        int flag = 1;
        for(int i = 0;i<n;i++){
            if(nums[i]%2 != 0){
                flag *=-1;
            }            
            if(i%6 == 5){
                flag *= -1;
            }
            diff +=flag * nums[i];
        }
        return diff;
    }
};
