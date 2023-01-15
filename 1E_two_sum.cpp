class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for (int i = 0; i < nums.size(); i++) {
            if (m[target-nums[i]]) return vector<int>{i, m[target-nums[i]]-1};
            m[nums[i]] = i+1; //bcuz 0 is false
        }
        return vector<int>{0,0};
    }
};