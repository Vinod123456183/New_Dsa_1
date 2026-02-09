


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

        vector<int>a(n);
        for(int i = 0; i <n; i++) 
            cin >> a[i];

        int i = 0;
        if(a[i] == 1) {
            cout << "YES\n";
        }else  {
            cout << "NO\n";
        }

    }
}
