// map me ek baar me ek insert 
// [] se value dalne pr it  change
// mp me insert function se  value change nahi ho skti h 
// if we try to change then it will give old value
// erase me hum key dete h
//mp.clear se pura map clear

#include<bits/stdc++.h>
using namespace std;
int main() {
    map<string , int>mp;
    //mp.insert( {"one" , 1 } );
    //mp.insert( {"one" , 11 } );
    mp["S"] = 11;
    mp["ss"] = 33;
    mp["ss"] = 22;
    
    //mp.erase("ss");
    mp.clear();
    
    cout << mp["ss"]<<" "<<mp.size();
    
}
