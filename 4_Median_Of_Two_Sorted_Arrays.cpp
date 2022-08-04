#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> dst;
    merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), back_inserter(dst));
    if (dst.size() % 2 == 1){
        return dst[dst.size() / 2];
    } else {
        return (dst[dst.size() / 2] + dst[dst.size() / 2 - 1]) / 2.0;
    }
    
}

int main() {
    vector<int> v1 = {1, 2};
    vector<int> v2 = {3, 4};

    cout << findMedianSortedArrays(v1, v2) << endl;
    return 0;
}