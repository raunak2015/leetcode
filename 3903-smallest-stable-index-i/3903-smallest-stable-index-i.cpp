class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> v(n);
        v[n-1] = nums[n-1];
        for(int i = n-2; i>=0; i--){
            v[i]= min(v[i+1],nums[i]);
        }
        int leftMax = 0;
        for(int i = 0; i<n; i++){
            leftMax = max(nums[i], leftMax);
            if((leftMax-v[i])<=k){
                return i;
            }
        }
        return -1;
    }
};