// O(nlogn)    

int firstMissingPositive(vector<int>& nums) {
        sort(begin(nums), end(nums));
        if (find(begin(nums), end(nums), 1) == end(nums)) return 1;
        for (size_t i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] > 0) {
                if (nums[i + 1] - nums[i] > 1) {
                    return nums[i] + 1;
                }
            }
        }
        return nums[nums.size() - 1] + 1;
    }
