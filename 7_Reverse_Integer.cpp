class Solution {
public:
    int reverse(int x) {
        int result = 0;

        for (; x != 0; x /= 10) {
            if (result > INT32_MAX / 10) return 0;
            if (result < INT32_MIN / 10) return 0;
            result *= 10;
            result += x % 10;
        }
        
        return result;
    }
};
