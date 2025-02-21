Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Input: nums = [2,2,1]
Output: 1
 
nums = [4,1,2,1,2]
Output: 4

  int a = 0;
        for(int i=0;i<nums.size();i++) {
            a ^=nums[i];
        }
        return a;
