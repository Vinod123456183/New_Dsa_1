// to find all subarray i = 0 ,  j = i 
// if subbray me counting krnu h toh below

    for (int i = 0; i < n; ++i) {
        int currentSum = 0;
        for (int j = i; j < n; ++j) {
            currentSum += arr[j]; 
             // if(cs>k)    break; //not for negative
            if (currentSum == k) {  
                count++;
                break; //kyuki ab ek subarray mil gya h ab dusra find kro
            }
        }
    }
    return count;
