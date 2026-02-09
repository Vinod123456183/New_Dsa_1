
// 6,4,5,10,11
// a b 

// After sort
// 4 5 6 10 11
// a b = true
bool comparator(int a ,int  b) {
    if(a < b) { // a should place before b (strictly )
        /*
        a < b T
        a = b F
        a > b F
        */
        return true
    }else return false
}


// ----------------------



sort array on basis of magnitude of values
-1 2 1 -2 4 6  8 -9 

ans should
1 -1 2 -2 4 6 8 9

bool comparator(int a ,int  b) {
    if(abs(a) < abs(b)) { 
        return true
    }else return false
}


// ----------------------
sort vector of pairs
// first it sort acc to first then acc to sec


// jo data type sort me hoga wahi omparator me hoga
// should be same bec we are comparing 
bool comparator(vector<pair<int,int>> a, vector<pair<int,int>> b) {
    if(a < b)  { 
        return true
    }else return false
}

for(auto [a,b] : d){
    cout << a << " " << b << endl ;
}



bool comparator(vector<pair<int,int>> a, vector<pair<int,int>> b) {
    if(a.first != b.first)  { 
        return a.first < a.second
    }else {
        return a.second < b.second
    } 
}
bool DefaultComaprator(vector<pair<int,int>> a, vector<pair<int,int>> b) {
    if(a.first == b.first)  { 
        return a.second < b.second
    }else {
        return a.first < b.second
    } 
}