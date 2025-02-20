        unordered_map<char,int>mp;
        for(auto it : chars)
            mp[it]++;
        for(auto it: s) {
            if(mp[it] == 0) 
                return 0;
            mp[it]--;
        }
        return 1;
    }
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        for(int i=0;i<words.size();i++){
            string El = words[i];
            if( F(El , chars) ) 
                ans += (words[i].size());
        }
        return ans;







  bool F(string s, string chars) {
        unordered_map<char, int> mp;
        for (auto it : chars) {
            mp[it]++;
        }
        for (char c : s) {
            auto it = mp.find(c);
            if (it == mp.end() || it->second == 0) {
                return false; 
            }
            it->second--; 
        }
        return true;
