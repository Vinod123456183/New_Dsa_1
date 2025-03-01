Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

  
Input: strs = [""]
Output: [[""]]


Input: strs = ["a"]
Output: [["a"]]

  
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;

        for(int i=0; i<s.size(); i++) {
            string El = s[i];
            string temp = El;               // important
            sort(temp.begin(),temp.end());
            mp[temp].push_back(El);         //important
        }
        
        for(auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
