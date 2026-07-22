class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even, odd;
        for(int i = 0; i< nums.size(); i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());
        int even_ptr=0;
        int odd_ptr = 0;
        for(int i = 0; i<nums.size();i++){
            if(i%2==0){
                nums[i] = even[even_ptr++];
            }
            else{
                nums[i] = odd[odd_ptr++]; 
            }
        }
        return nums;

    }
};