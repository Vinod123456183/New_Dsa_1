// to find all subarray i = 0 ,  j = i 
// if subbray me counting krnu h toh below




 arr = [10, 2, -2, -20, 10], k = -10
Output: 3
Explaination: Subarrays: arr[0...3], arr[1...4], arr[3...4] have sum exactly equal to -10


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
