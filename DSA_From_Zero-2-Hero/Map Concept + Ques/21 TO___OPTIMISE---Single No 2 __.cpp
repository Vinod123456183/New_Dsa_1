Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Input: nums = [2,2,3,2]
Output: 3

Input: nums = [0,1,0,1,0,1,99]
Output: 99

  unordered_map<int,int>v;
        for(int i=0;i<nums.size();i++){
            int El = nums[i];
            v[El]++;
        }   
        for(auto i : v) {
            if(i.second == 1) {
                return i.first;
            }
        }
        return 0;
  
