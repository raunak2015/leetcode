class Solution {
public:
    long long countCommas(long long n) {
        long long count = 0;
        if (n < 1000) {
            return 0;
        } else if (n <= 999999) {
            return n - 999;
        } else if (n <= 999999999) {
            count = (999999 - 999) + (n - 999999) * 2;
            return count;
        } else if (n <= 999999999999) {
            count =
                (999999 - 999) + (999999999 - 999999) * 2 + (n - 999999999) * 3;
            return count;
        } else if (n <= 999999999999999) {
            count = (999999 - 999) + (999999999 - 999999) * 2 +
                    (999999999999 - 999999999) * 3 + (n - 999999999999) * 4;
            return count;
        } else if (n <= 999999999999999999) {
            count = (999999 - 999) + (999999999 - 999999) * 2 +
                    (999999999999 - 999999999) * 3 +
                    (999999999999999 - 999999999999) * 4 +
                    (n - 999999999999999) * 5;

            return count;
        }
        return count;
    }
};