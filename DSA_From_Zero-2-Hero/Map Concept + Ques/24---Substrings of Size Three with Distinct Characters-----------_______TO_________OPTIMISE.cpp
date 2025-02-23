
    bool C(string v) {
        if (v[0] != v[1] and v[1] != v[2] and v[0] != v[2]) {
            return 1;
        }
        return 0;
    }

    int countGoodSubstrings(string s) {
        if(s.size()<3) return 0;
        vector<string> v;
        int c = 0;
        for (int i = 0; i < s.size() - 2; i++) {
            string ss = "";
            for (int j = i; j < i + 3; j++) {
                ss += s[j];
            }
            v.push_back(ss);
        }

        for (int i = 0; i < v.size(); i++)
            if (C(v[i]))
                c += 1;
        return c;

// 2
        for (int i = 0; i < s.size() - 2; i++) {
            string ss = s.substr(i, 3);  
            if (C(ss)) {
                c++;  
            }
        }

// 3
for(int i=0; i<s.size()-2; i++) 
if(s[i]!=s[i+1] and s[i+1]!=s[i+2] and s[i]!=s[i+2])
c++;



//4 
   long long ans = 0, sum = 0, head = 0, tail = 0;

        unordered_map<char,int>mp;

        int k =3;

        for (; head < s.size(); head++) {
        
            mp[s[head]]++;

            while (head-tail+1 == k) {

                if(mp.size() == k and head - tail + 1 == k)/////most imp line

                ans +=  1;

                    mp[s[tail]]--;

                if(mp[s[tail]]==0)
                    mp.erase(s[tail]);

                tail++;

            }

        }

        return  ans;
        
