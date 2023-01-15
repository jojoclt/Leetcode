class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<pair<int,int>> v;
        for (auto &e: nums) m[e]++;
        
        for (auto it = m.begin(); it != m.end(); it++) {{
            v.push_back(make_pair((*it).second,(*it).first));
        }}
        sort(v.begin(),v.end(), [](auto& l, auto& r){
            return l.first > r.first;
        });
        vector<int>ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};