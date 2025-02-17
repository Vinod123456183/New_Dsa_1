Input: nums = [1,2,4,6], operations = [[1,3],[4,7],[6,1]]
Output: [3,2,7,1]
Explanation: We perform the following operations on nums:
- Replace the number 1 with 3. nums becomes [3,2,4,6].
- Replace the number 4 with 7. nums becomes [3,2,7,6].
- Replace the number 6 with 1. nums becomes [3,2,7,1].
We return the final array [3,2,7,1].


  

unordered_map<int , int>mp;
        for(int i=0; i<ar.size();i++) {
            int El = ar[i];
            mp[El]=i;
        }

        for(int i=0;i<br.size();i++){
            int Old = br[i][0];
            int New = br[i][1];
            if(mp.find(Old) != mp.end()){
                int idx = mp[Old];
                ar[idx] = New;
                mp[New] = idx;  // important
            }
        }
        return ar;
