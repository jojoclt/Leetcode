class Solution {
public:
// need to make a count[26] into string hash
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for (auto &s: strs) {
            string key = getHash(s);
            m[key].push_back(s);
        }
        vector<vector<string>> result;

        for (auto it = m.begin(); it != m.end(); it++)
            result.push_back(it->second);
        return result;
    }
private:
    string getHash(string s) {
        vector<int> count(26);
        for (auto &c: s)
            count[c-'a']++;
        
        string hash = "";
        for (int i = 0 ; i < 26; i++) hash += to_string(count[i]+'a');
        return hash;
    }
};