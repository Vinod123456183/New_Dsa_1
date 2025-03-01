Current Previous Concept 

important 

In one operation, select any index i such that 0 < i < words.length and words[i - 1]
and words[i] are anagrams, and delete words[i] from words. Keep performing this operation as long as you can select an index that satisfies the conditions.

["abba","baba","bbaa","cd","cd"]
Output: ["abba","cd"]

a,b,a
a,b,a



   vector<string>ans;
        string prevSorted = "";

        for(int i = 0; i<s.size(); i++)  {

            string El = s[i];
            string currentSorted  = El;

            sort(currentSorted.begin(),currentSorted.end());

            if( prevSorted != currentSorted )  {
                ans.push_back(El) ;
                prevSorted = currentSorted;
            }

        }
        return ans;
