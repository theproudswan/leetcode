#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> pos_val; // Position and value

    for (int i = 0; i < nums.size(); ++i){
        pos_val.insert({i, nums[i]});

        for (auto it = begin(pos_val); it != end(pos_val); it++){
            if ((it->second == target - nums[i]) && (it->first != i)){
                return {i , it->first};
            }
        }

    }
    return {-1, -1};
}

int main() {
    vector<int> nums = {3,3};
    int target = 6;

    auto v = twoSum(nums, target);

    for (auto i : v){
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}
