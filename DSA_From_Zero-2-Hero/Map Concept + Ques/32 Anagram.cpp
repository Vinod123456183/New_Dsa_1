Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false


        if (s.size() != t.size())
            return 0;

        unordered_map<char, int> mp;
        for (auto i : s) {
            mp[i]++;
        }

        for (auto i : t) {
            if (mp.find(i) == mp.end()) {
                return 0;
            }
            mp[i]--;

            if (mp[i] == 0) {
                mp.erase(i);
            }
            
        }
        return mp.empty();
