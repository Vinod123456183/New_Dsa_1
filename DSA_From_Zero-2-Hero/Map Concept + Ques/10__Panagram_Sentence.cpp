// agar ek baar bhi koi character nahi aaya toh return 0
class Solution {
public:
    bool checkIfPangram(string st) {
        int n =st.size();
        vector<int>v(26,0);
        for(int i=0; i<st.size(); i++) {
            int El = st[i]-'a';
            v[El]++;
        }
        for(int  i=0; i<v.size(); i++) {
            if(v[i] == 0)
                return 0;
        }
        return 1;

    }
};
