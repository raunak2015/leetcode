class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        double avg = 0;
        int sum  = 0;
        int count = 0;
        for(int i = 0; i< k; i++){
            sum += arr[i];
        }
        avg = sum/k;
        if(avg>=threshold){
            count++;
        }
        for(int i = k; i< arr.size(); i++){
            sum = sum - arr[i-k] + arr[i];
            avg = sum/k;
            if(avg>=threshold){
                count++;
            }
        }
        return count;
    }
};