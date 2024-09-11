class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> numMap;//{number, index}
        int n = nums.size();

        for(int i=0;i<n;i++){
            int search_target = target - nums[i];
            if(numMap.count(search_target)){
                return {numMap[search_target], i};
            }
            numMap[nums[i]] = i;
        }
        return {};
    }
};