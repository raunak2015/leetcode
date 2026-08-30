class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int temp = n;
        while (n > 0) {
            int temp = n % 10;
            sum += temp;
            product *= temp;
            n /= 10;
        }
        return temp % (sum + product) == 0;
    }
};