//  3 concusitive pr 2 return 
    // else 1 count 


#include <bits/stdc++.h>
using namespace std;


int main() {
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    int ans = 0;
    while (t--) {

        int n;
        cin >> n;

        string s;
        cin>>s;

        int i = 0;
        int ans = 0;
        bool iFound = false;

        while(i < n - 2) {
            if(i < n - 2 and s[i] == '.' and s[i+1] == '.' and s[i+2] == '.') {
                iFound = true;
                break;
            }
            i++;
        }

        
        i = 0;
        while(i < n) {
            if(s[i] == '.')
                ans++;
            i++;
        }




        if(iFound == true) {
            ans = 2;
        } 
        cout << ans << endl;
    }

}
