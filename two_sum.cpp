#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (nums[i] + nums[j] == target)
            return {i, j};
        else if (nums[i] + nums[j] > target)
            j--;
        else
            i++;
    }
    return {};
}

int main()
{
    vector<int> v = {2, 4, 7, 9, 11, 19};
    vector<int> ans = twoSum(v, 15);
    cout << "The indices of the two numbers that add up to target: " << ans[0] << ", " << ans[1];
}