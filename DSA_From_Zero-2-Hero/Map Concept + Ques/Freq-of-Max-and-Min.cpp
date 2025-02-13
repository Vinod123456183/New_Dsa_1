#include <iostream>
#include <map>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int arr[] = {3, 2, 3, 2, 4, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int>mp;
    
	//if i initalisze with 0 then not coming correct 
	int max_freq = INT_MIN;
    int min_freq = INT_MAX;

    int max_freq_ele = 0;
    int min_freq_ele = 0;

	for(int i = 0; i < n; i++) {
    	mp[arr[i]]++;
    }
    
    for(auto i : mp) {
    	if(max_freq < i.second) {
			max_freq = i.second;
            max_freq_ele = i.first;
        } if(min_freq > i.second) {
			min_freq = i.second;
            min_freq_ele = i.first;
		}
    }
    cout << max_freq << " " << max_freq_ele << endl;
    cout << min_freq << " " << min_freq_ele << endl;
}
