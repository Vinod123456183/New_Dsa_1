You are given an integer array nums. A number x is lonely when it appears only once, and no adjacent numbers (i.e. x + 1 and x - 1) appear in the array.

Input: nums = [10,6,5,8]
Output: [10,8]

Input: nums = [1,3,5,3]
Output: [1,5]


  vector<int> ans;
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

    for (auto it : mp) {
            
          int El1 = it.first - 1;
          int El2 = it.first + 1;

          if (it.second == 1 and mp.find(El1) == mp.end() && mp.find(El2) == mp.end()) {
            ans.push_back(it.first);
          }
}
return ans;
