#include <bits/stdc++.h>
using namespace std;


int main() {
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a[1000];

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = a[0];  // distance from 0 to first station

        // distances between stations
        for (int i = 1; i < n; i++) {
            ans = max(ans, a[i] - a[i - 1]);
        }

        // last station to x and back
        ans = max(ans, 2 * (x - a[n - 1]));

        cout << ans << "\n";
    
        
    }

}
