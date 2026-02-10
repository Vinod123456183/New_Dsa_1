// // #include <bits/stdc++.h>
// // using namespace std;

// // bool F(string s, string x) {
// //     return x.find(s) != string::npos;
// // }

// // int main() {

// // #ifndef ONLINE_JUDGE
// //     freopen("7-input.txt", "r", stdin);
// //     freopen("7-output.txt", "w", stdout);
// // #endif

// //     int t;
// //     cin >> t;

// //     while (t--) {
// //         int n, m;
// //         cin >> n >> m;

// //         string x, s;
// //         cin >> x >> s;

// //         int ans = -1;

// //         string x0 = x;
// //         string x1 = x0 + x0;
// //         string x2 = x1 + x1;
// //         string x3 = x2 + x2;
// //         string x4 = x3 + x3;
// //         string x5 = x4 + x4;

// //         if (F(s, x0)) ans = 0;
// //         else if (F(s, x1)) ans = 1;
// //         else if (F(s, x2)) ans = 2;
// //         else if (F(s, x3)) ans = 3;
// //         else if (F(s, x4)) ans = 4;
// //         else if (F(s, x5)) ans = 5;

// //         cout << ans << "\n";
// //     }

// //     return 0;
// // }


#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("7-input.txt", "r", stdin);
    freopen("7-output.txt", "w", stdout);
#endif


    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int ans = -1;

        for (int i = 0; i < 6; i++) {
            if (x.find(s) != string::npos) {
                ans = i;
                break;
            }
            x += x;   // operation: append x to itself
        }

        cout << ans << "\n";
    }

}







// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     string x = "efonvjihiuhvhihoivjoijoivjhjivjijoihvhoirceforc";
//     string s = "joi";
//     if(
//         (x.find(s) != string::npos)

//     )cout << x.find(s);
// }
