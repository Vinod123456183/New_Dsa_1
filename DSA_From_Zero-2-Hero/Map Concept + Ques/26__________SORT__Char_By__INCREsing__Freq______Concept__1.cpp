// Input: s = "tree"
// Output: "eert"
// Explanation: 'e' appears twice while 'r' and 't' both appear once.
// So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.

// Input: s = "cccaaa"
// Output: "aaaccc"
// Explanation: Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
// Note that "cacaca" is incorrect, as the same characters must be together.

        vector<pair<char,int>>Pair;
        unordered_map<char,int>mp;
        string ans;
        int n = s.size();

        for(int i=0; i<s.size(); i++) {
            int El = s[i];
            mp[El]++;
        }

        for(auto it : mp) {
            Pair.push_back({it.first,it.second});
        }

        sort(Pair.begin(),Pair.end(),[](const pair<char,int>&a , const pair<char,int>&b ) {
            if(a.second == b.second) {
                return a.first < b.first;
            }
            return a.second > b.second;
        });

        for (auto& p : Pair) {
            for(int i = 0; i<p.second; i++) {   //for printing till frequency times .
                ans += p.first;
            }
        }
        return ans;
