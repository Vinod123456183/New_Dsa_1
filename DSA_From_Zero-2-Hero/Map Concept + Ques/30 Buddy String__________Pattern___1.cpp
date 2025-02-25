ek swap jisse string == 

Given two strings s and goal, return true if you can swap two letters in s so the result is equal to goal, otherwise, return false.

Swapping letters is defined as taking two indices i and j (0-indexed) such that i != j and swapping the characters at s[i] and s[j].

Input: s = "ab", goal = "ba"
Output: true
Explanation: You can swap s[0] = 'a' and s[1] = 'b' to get "ba", which is equal to goal.

Input: s = "ab", goal = "ab"
Output: false
Explanation: The only letters you can swap are s[0] = 'a' and s[1] = 'b', which results in "ba" != goal.

Input: s = "aa", goal = "aa"
Output: true
Explanation: You can swap s[0] = 'a' and s[1] = 'a' to get "aa", which is equal to goal.





    bool buddyStrings(string s, string goal) {

        if (s.size() != goal.size())
            return 0;
        if (s == goal) {
            unordered_set<char> st(s.begin(), s.end());
            return st.size() < s.size();
        }
        vector<int> ar;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i]) {
                ar.push_back(i);
            }
        }
        // can give runtime for size only 1
        // abac
        // abad

        if (ar.size() > 1) {
            swap(s[ar[0]], s[ar[1]]);
            return s == goal;
        }
return 0;
 
