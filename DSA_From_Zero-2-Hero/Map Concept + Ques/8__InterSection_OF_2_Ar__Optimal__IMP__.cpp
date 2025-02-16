
        sort(ar1.begin(),ar1.end());
        sort(ar2.begin(),ar2.end());
    vector<int>a;
        int i=0 , j=0;
        while(i<ar1.size() and j<ar2.size()) {
            if(ar1[i] == ar2[j]){
                a.push_back(ar1[i]);
                i++;j++;
            }else if(ar1[i] > ar2[j]){
                j++;
            }else
                i++;
        }


// OPTIMAL

      map<int,int>freq;
        vector<int>ans;
        for(int i = 0;i<nums1.size();i++){
            freq[nums1[i]]++;
        }
        for(int i = 0;i<nums2.size();i++){
            if (freq[nums2[i]] > 0){
                freq[nums2[i]]--; 
                ans.push_back(nums2[i]);
            }
        }
        return ans;
