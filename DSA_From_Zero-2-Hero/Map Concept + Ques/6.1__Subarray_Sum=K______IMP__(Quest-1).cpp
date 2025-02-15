Given an unsorted array of integers, find the number of subarrays having sum exactly equal to a given number k.

Examples:

Input: arr = [10, 2, -2, -20, 10], k = -10
Output: 3
Explaination: Subarrays: arr[0...3], arr[1...4], arr[3...4] have sum exactly equal to -10.
Input: arr = [9, 4, 20, 3, 10, 5], k = 33
Output: 2
Explaination: Subarrays: arr[0...2], arr[2...4] have sum exactly equal to 33.
Input: arr = [1, 3, 5], k = 0
Output: 0

  
  int countSubarrays(vector<int> &ar, int k) {
        int c = 0 , s = 0;
        unordered_map<int,int>mp;
        mp[0] = 1; //for sum = 0
        for(int i=0; i<ar.size(); i++) {
            int El = ar[i];
            s += El;
            if(mp.find(s-k) != mp.end()){
                c+=mp[s-k];
            }
            mp[s]++;//important
        }
        return c;
    }
