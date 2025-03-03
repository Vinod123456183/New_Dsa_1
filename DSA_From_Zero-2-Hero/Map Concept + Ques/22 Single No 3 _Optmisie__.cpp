// Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order.
// You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.

// Input: nums = [1,2,1,3,2,5]
// Output: [3,5]
// Explanation:  [5, 3] is also a valid answer.
  
// Input: nums = [-1,0]
// Output: [-1,0]

  vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> v;
        vector<int> s;
        for (int i = 0; i < nums.size(); i++) {
            int El = nums[i];
            v[El]++;
        }
        for (auto i : v) {
            if (i.second == 1) {
                s.push_back(i.first);
            }
        }
        return s;
      
