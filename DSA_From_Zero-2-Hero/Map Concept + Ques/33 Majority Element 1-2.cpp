iven an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Input: nums = [3,2,3]
Output: 3

Input: nums = [2,2,1,1,1,2,2]
Output: 2

unordered_map<int,int>mp;
        int c = 0;
        for(auto it : nums) mp[it]++;
        for(auto it : mp) {
            if(it.second*2 > nums.size()) {
                c=it.first;
                break;
            }
        }
        return c;



// Majority Elem 2

Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times

   vector<int>ans;
        unordered_map<int , int>mp;
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }    
        for(auto i : mp) {
            if(i.second > nums.size()/3) {
                ans.push_back(i.first);
            }
        }
        return ans;
