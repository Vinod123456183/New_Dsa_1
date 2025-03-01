Input: pattern = "abba", s = "dog cat cat dog"
Output: true
  
Input: pattern = "abba", s = "dog cat cat fish"
Output: false



 bool wordPattern(string pattern, string t) {

        stringstream ss(t);
        vector<string> words;

        string s;
        while (ss >> s) {
            words.push_back(s);
        }

        if(words.size() != pattern.size())
            return 0;

        unordered_map<char,string>mp1;
        unordered_map<string,char>mp2;

        // abba
        // dog dog dog dog

        // |         |
        // |         |
        // | b , dog |
        // | a , dog |
        // |_________|


        // |         |
        // |         |
        // | dog , b |
        // | dog , a |
        // |_________|
        
        // so line 37 return false

        for(int i=0; i<pattern.size();i++) {

            if(mp1.find(pattern[i]) != mp1.end() and mp1.find(pattern[i])->second != words[i]) {
                return 0;
            }

            if(mp2.find(words[i]) != mp2.end() and mp2.find(words[i])->second != pattern[i]) {
                return 0;
            }

            mp1[pattern[i]] = words[i];     // sbse phle isme element hmesha jaega 
            mp2[words[i]] = pattern[i];     // sbse phle isme element hmesha jaega 
        }

        return 1;
