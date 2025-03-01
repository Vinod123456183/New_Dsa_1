N = 3
A[] = {1, 2, 3}
B[] = {4, 5, 1}
Output: 24

 sort(ar1 , ar1+n);
        sort(ar2 , ar2+n);
        long long ans = 0;
        for(int i=0; i<n; i++) {
            ans += (ar1[i]*ar2[i]);
        }
        return ans;
