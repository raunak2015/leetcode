class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int k = n * 0.05;
        double sum = 0;
        int remaining = n - (2*k);
        for(int i = k; i<n-k; i++){
            sum += arr[i];
        }
        return sum/remaining;
    }
};