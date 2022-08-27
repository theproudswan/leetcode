class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long int x = 1;
        if (n % 2 != 0 && n != 1) return false;
        
        while (x < n ) {
            x = x << 1;
        }
        if (x == n) return true;
        return false;
    }
};
