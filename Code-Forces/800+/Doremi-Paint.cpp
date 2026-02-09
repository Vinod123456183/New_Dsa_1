#include <bits/stdc++.h>
using namespace std;

int main() {
    
#ifndef ONLINE_JUDGE
    freopen("Doremi-Paint-Input.txt", "r", stdin);
    freopen("Doremi-Paint-Output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[a[i]]++;
        }

        if (mp.size() == 1) {
            cout << "Yes\n";
        }
        else if (mp.size() == 2) {
            auto it = mp.begin();
            int one = it->second;
            it++;
            int two = it->second;

            if (one == two || abs(one - two) == 1)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else {
            cout << "No\n";
        }
    }

    return 0;
}
