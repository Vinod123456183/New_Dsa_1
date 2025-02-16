 nums[i] == nums[j] and i < j
// nested loop i 0 j i+1
   int res = 0;
        unordered_map<int, int> mp;
        for (int a : ar) {
            int El = a;
            res += mp[El]++;
        }
return res;
