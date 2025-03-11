
Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.
In one move, you can increment or decrement an element of the array by 1.
Test cases are designed so that the answer will fit in a 32-bit integer.


Example 1:
Input: nums = [1,2,3]
Output: 2
Explanation:
Only two moves are needed (remember each move increments or decrements one element):
[1,2,3]  =>  [2,2,3]  =>  [2,2,2]

Example 2:
Input: nums = [1,10,2,9]
Output: 16



  
    int minMoves2(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        vector<long long> prefixSum(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            prefixSum[i] = prefixSum[i - 1] + nums[i - 1];
        }

        long long result = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            long long leftSum = prefixSum[i];
            long long rightSum = prefixSum[n] - leftSum;
            long long leftCost = (long long)nums[i] * i - leftSum;
            long long rightCost = rightSum - (long long)nums[i] * (n - i);
            result = min(result, leftCost + rightCost); 
        }

        return result;
