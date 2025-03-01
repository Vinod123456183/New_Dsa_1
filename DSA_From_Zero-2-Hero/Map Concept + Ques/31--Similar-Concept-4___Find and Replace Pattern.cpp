["abc","deq","mee","aqq","dkd","ccc"], pattern = "abb"
Output: ["mee","aqq"]

Input: words = ["a","b","c"], pattern = "a"
Output: ["a","b","c"]


bool F(string s , string pattern) {
        if(s.size() != pattern.size())
            return 0;
        unordered_map<char,char>mp1 , mp2;
        for(int i=0; i<s.size(); i++) {
          
            if(mp1.find(s[i]) != mp1.end() and mp1.find(s[i])->second != pattern[i]) {
                return 0;
            }
            if(mp2.find(pattern[i]) != mp2.end() and mp2.find(pattern[i])->second != s[i]) {
                return 0;
            }
            mp1[s[i]] = pattern[i];
            mp2[pattern[i]] = s[i];
        }
        return 1;
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(int i=0; i<words.size(); i++) {
            if(F(words[i] , pattern)) {
                ans.push_back(words[i]);
            }
        }
        return ans;
