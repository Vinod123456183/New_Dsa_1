        vector<vector<int>>ans;
        map<int , int>mp;

        for(int i=0;i<ar2.size(); i++) {
            mp[ar2[i][0]] = ar2[i][1];
        }

        for(int i=0;i<ar1.size(); i++) {
            int El = ar1[i][0];
            if(mp.find(El) != mp.end()) {    // imp agar pair miltta h toh ar1 k dusre k sath add kro and map me dalo
                mp[El] += ar1[i][1];        //imp
            }else{                          // wrna diff pair ka map bna k dalo
                mp[El] = ar1[i][1];
            }
        }
        for(auto it : mp) {
            ans.push_back({it.first,it.second});
        }
        return ans;
