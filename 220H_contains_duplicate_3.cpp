class Solution {
public:
// [] means capture, it can capture var from outside, or it can init (c++14)
    bool containsNearbyAlmostDuplicate(std::vector<int>& nums, int indexDiff, int valueDiff) {
        set<int> w;
        for (int i = 0; i < nums.size(); i++) {
            auto up = w.upper_bound(nums[i]);
            if ((up != w.end() && abs(*up - nums[i]) <= valueDiff) 
            or (up!= w.begin() and abs(*(--up) - nums[i]) <= valueDiff))
                return true;    
            w.insert(nums[i]);

            if (w.size() == indexDiff+1) w.erase(nums[i-indexDiff]);
        }
        return false;
    }
};