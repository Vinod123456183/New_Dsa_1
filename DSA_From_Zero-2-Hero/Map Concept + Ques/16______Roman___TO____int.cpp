        unordered_map<char,int>mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        for(int i=0; i<s.size()-1;i++){
            int El = s[i];
            if(mp[El] < mp[s[i+1]]){    //C = 100 , M 1000
                ans -= mp[El];
            }
            else if(mp[El] == mp[s[i+1]]) {  // III
                ans += mp[El];
            }
            else if(mp[El] >= mp[s[i+1]]) {  // M=1000 X 10
                ans += mp[El];
            }
        }
        ans += mp[s[s.size()-1]];
        return ans;
