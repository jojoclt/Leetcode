class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        int c[30] = {};

        for (int i = 0; i < s.length(); i++) {
            c[s[i]-'a']++;
            c[t[i]-'a']--;
        }
        for (int i = 0 ; i < 26; i++){
            if (c[i]) return false; 
        }
        
        return true;
    }
};