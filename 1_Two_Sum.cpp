#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> pos_val; // Position and value

    for (int i = 0; i < nums.size(); ++i){
        pos_val.insert({i, nums[i]});
        cout << "Inserted " << nums[i] << " on position " << i << endl;
        cout << "Trying to find " << target - nums[i] << endl;
        // unordered_map<int, int>::iterator it = pos_val.find(target - nums[i]);
        for (auto it = begin(pos_val); it != end(pos_val); it++){
            if ((it->second == target - nums[i]) && (it->first != i)){
                return {i , it->first};
            }
        }
        // if (it != end(pos_val)) {
        //     cout << "Found " << it->second << " on position " << it->first << endl;

        //     return {i , it->first};
        // }
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