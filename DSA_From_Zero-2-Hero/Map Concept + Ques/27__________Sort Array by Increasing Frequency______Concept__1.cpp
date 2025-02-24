// Input: nums = [1,1,2,2,2,3]
// Output: [3,1,1,2,2,2]
// Explanation: '3' has a frequency of 1, '1' has a frequency of 2, and '2' has a frequency of 3.
// Example 2:

// Input: nums = [2,3,1,3,2]
// Output: [1,3,3,2,2]
// Explanation: '2' and '3' both have a frequency of 2, so they are sorted in decreasing order.

        vector<int>ans ;
        vector<pair<int,int>>Pair;
        unordered_map<int,int>mp;

        for(int i=0; i<nums.size(); i++) {
            int El = nums[i];
            mp[El]++;
        }

        for(auto it: mp) {
            Pair.push_back({it.first,it.second});
        }

        sort(Pair.begin(),Pair.end(),[](const pair<int,int>&a , const pair<int,int>&b){
            if(a.second == b.second) {
                // becuause frequency is same therefore put in decending order as shown in EX-2
                return a.first > b.first;     
            }
            return a.second < b.second;
        });

        for(auto P : Pair) {
            for(int i=0; i<P.second; i++) { //
                ans.push_back(P.first);
            }
        }
        return ans;
