#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = i; j < n; j++) {
            if (nums[i]+nums[j] == target) {
                return {i, j};
            }
        }
    }   
    return {};
}

int main() {
    vector<int> v = {2,4,7,9,11,19};
    vector<int> ans = twoSum(v, 15);
    cout<< "The indices of the two numbers that add up to target: " << ans[0] << ", " << ans[1];
}