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






class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lowFreq(26, 0);  
        vector<int> upFreq(26, 0);        
        int cntWord = 0;

        for (char ch : word) {
            if (islower(ch)) { 
                    lowFreq[ch - 'a']++;  
            } else 
                upFreq[ch - 'A']++; 
        }

        for (int i = 0; i < 26; i++) {
            if (lowFreq[i] > 0 && upFreq[i] > 0) {
                cntWord++;
            }
        }
        return cntWord;  
    }
};

