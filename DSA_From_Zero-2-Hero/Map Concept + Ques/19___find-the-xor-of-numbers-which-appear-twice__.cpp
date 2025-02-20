// 1a
sort(nums.begin(),nums.end());
        vector<int>v;
        for(int i=1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) {
                v.push_back(nums[i]);
            }
        }
        int ans=0;
        for(int i=0;i<v.size(); i++) {
            ans ^= v[i];
        }
        return ans;

// 2
        vector<int>v(51 , 0) ;
        for(int i=0; i<nums.size(); i++) {
            int El = nums[i] ;
            v[El]++;
        }
        int ans = 0;
        for(int i=0; i<v.size(); i++) {
            if(v[i] == 2) {
                ans ^= i;
            }
        }

// 3 
        int ans = 0;
        unordered_map<int, int> freq;
        for (auto n : nums) {
            freq[n]++;
        }
        for (auto [k, v] : freq) {
            if (v == 2)
                ans = ans ^ k;
        }
        return ans;

// 4


     unordered_map<int, int> countMap;
        for (int num : nums) {
            countMap[num]++;
        }

        int result = 0;
        for (auto pair : countMap) {
            if (pair.second == 2) {
                result ^= pair.first;
            }
        }
        return result;
