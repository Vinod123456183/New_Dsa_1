Input: arr1 = [3, 1, 1] , arr2 = [6, 5, 4]
Output: 23 
Explanation: 1*6+1*5+3*4 = 6+5+12 = 23 is the minimum sum.

  // we dont sort both always bec the case can be different 
    sort(ar1.begin(),ar1.end());
    sort(ar2.begin(),ar2.end(),greater<int>());
      long long ans = 0;
      for(int i=0; i<ar1.size(); i++) 
          ans += (ar1[i]*ar2[i]);
}return ans;
