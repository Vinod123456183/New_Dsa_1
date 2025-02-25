Input: s1 = "bank", s2 = "kanb"
Output: true
Explanation: For example, swap the first character with the last character of s2 to make "bank".
Example 2:

Input: s1 = "attack", s2 = "defend"
Output: false
Explanation: It is impossible to make them equal with one string swap.
Example 3:

Input: s1 = "kelb", s2 = "kelb"
Output: true
Explanation: The two strings are already equal, so no string swap operation is required.


if (s1 == s2)
            return 1;   
        vector<int>ar;
        for(int i=0; i<s1.size(); i++) {
            if(s1[i] != s2[i]){
                ar.push_back(i);
            }
        }
        if(ar.size()>1) {
            swap(s2[ar[0]],s2[ar[1]]);
            return s1==s2;
        }
        return 0;
