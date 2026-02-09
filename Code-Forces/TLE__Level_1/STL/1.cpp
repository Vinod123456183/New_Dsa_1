// Pairs can compare > < 
// [1,2] < [1,9]


// vector are dynamic

#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>v={11,22,33,54};
    v.insert(v.begin()+2,662); 
    // begin(0) se 2 indx tk
 // comp n bec shifg
    for(auto it : v) 
        cout<<it<<" ";
    cout<<endl;
}


// set store in sorted , 
// insert , del = logn


// mp[1] = 5 {1,5}
// mp[1] = 10 {1,10} , it replaces old so ans = {1,10}
/* sorting in back done by watching key */
// index of min_element // min_element(beg , end ) - begin


// deque ~ vector but have extra functions push_front , pop_front
// dq are slower than vectors


// complxity of insertuin in vector and dq in back and front ?


