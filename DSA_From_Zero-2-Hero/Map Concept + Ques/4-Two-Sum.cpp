class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        // initially map is empty so first time map me hi jaega
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int Element = nums[i];
            if(mp.find(k-Element) != mp.end()){
                return {  mp[k-Element] , i }; //purana ka index and new index
            }else{
                mp[Element] = i ;
            }
        }
        return {-1,-1};
    }
};
