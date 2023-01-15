class Solution {
public:
    // instead of do everything, whatabout process at runtime?
    // becuz idx starts with zero and it is our base conditions, we use i+1 instead, then when we found at idx, we also use i+1, the offset does works the same as i-j
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        auto &v = nums;
        for (size_t i = 0; i < v.size(); i++) {
            if (!m[v[i]]) m[v[i]] = i+1;
            else {
                if (m[v[i]] && (i+1 - m[v[i]] <= k)) return true;
                else m[v[i]] = i+1; 
                // store the latest found
            }
        }
        return false;
    }
};