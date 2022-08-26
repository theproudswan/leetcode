class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> result (2 << (n - 1));

        for (size_t i = 0; i < result.size(); i++) {
            result[i] = i ^ (i >> 1);
        }
        
        return result;
    }
};
