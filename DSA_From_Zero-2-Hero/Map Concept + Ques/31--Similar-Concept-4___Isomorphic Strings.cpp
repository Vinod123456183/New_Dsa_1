Input: s = "egg", t = "add"
Output: true
Mapping 'e' to 'a'.
Mapping 'g' to 'd'.

Input: s = "foo", t = "bar"
Output: false



bool isIsomorphic(string s, string t) {
        
        if(s.size() != t.size()) 
            return 0;

        unordered_map<char,char>mp1; 
        unordered_map<char,char>mp2;
        
        for(int i=0; i<s.size(); i++) {
            if(mp1.find(s[i]) != mp1.end() and mp1.find(s[i])->second != t[i]) {    // s = "foo", t = "bar"
                return 0;
            }
            if(mp2.find(t[i]) != mp2.end() and mp2.find(t[i])->second != s[i]) {    // s = "foo", t = "bar"
                return 0;
            }
            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }
        return 1;
