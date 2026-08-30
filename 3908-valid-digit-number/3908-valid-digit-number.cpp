class Solution {
public:
    bool validDigit(int n, int x) {
        bool found = false;
        while(n>9){
            if(n%10 == x){
                found = true;
            }
            n /= 10;
        }
        return found && n != x;
    }
};