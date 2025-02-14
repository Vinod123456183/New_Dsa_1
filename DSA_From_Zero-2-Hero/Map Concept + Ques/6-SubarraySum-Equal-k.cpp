// to find all subarray i = 0 ,  j = i 
// if subbray me counting krnu h toh below

    for (int i = 0; i < n; ++i) {
        int currentSum = 0;
        for (int j = i; j < n; ++j) {
            currentSum += arr[j]; 
            if (currentSum == k) {  
                count++;
            }
        }
    }
    return count;
