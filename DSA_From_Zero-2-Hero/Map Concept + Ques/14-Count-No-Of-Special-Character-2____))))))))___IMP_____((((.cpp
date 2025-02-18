3121. Count the Number of Special Characters II
You are given a string word. A letter c is called special if it appears both in lowercase and uppercase in word, and every lowercase occurrence of c appears before the first uppercase occurrence of c.

Example 1:
Input: word = "aaAbcBC"
Output: 3

Input: word = "AbBCab"
Output: 0
  
        vector<int>up(26 , 0);
        vector<int>down(26 , 0);

        for(auto it : s) {
            int El = it;
            if(islower(El)) {  
                // lower bhrne se phle kahin voh uske barabari index me upper wala toh nahi bhara h ? 
                if(up[El-'a'] == 0) {
                    down[El-'a']++;
                }else{  // means bhara h toh freq 0 hi rakho
                    down[El-'a'] = 0;
                }
            }else{
                up[El-'A']++;
            }
        } 
        int ans=0;
        for(int i=0; i<26; i++){
            if(up[i] > 0 and down[i] > 0){
                ans++;
            }
        }
     
