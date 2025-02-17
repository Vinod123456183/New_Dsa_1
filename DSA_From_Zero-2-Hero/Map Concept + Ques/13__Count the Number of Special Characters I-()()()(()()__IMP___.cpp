    unordered_set<int>st1;
        unordered_set<int>st2;
// bec if we put char toh it never match 

      for(int i=0; i<ar.size();i++) {
            int El = ar[i];
            if(El >= 'a' and El <= 'z' )
                st1.insert(El-'a');
            else
                st2.insert(El-'A');
        }
        int Ans = 0;
        for(auto i : st1) {
            if(st2.find(i) != st2.end()) {
                Ans++;
            }
        }
        return Ans;
