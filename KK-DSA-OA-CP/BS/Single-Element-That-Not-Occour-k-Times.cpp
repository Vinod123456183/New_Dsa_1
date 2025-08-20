-> You are given a sorted array -> each element in the array occurs for exactly “K” times ;
except 1 element -> that 1 element occurs for < K times; please find that element 


BruteForce 
  hashamp - Count freq if freq less than k return that
  Count - using count 
  BS - if upper bound + 1 is multiple of k then sure it will multipy so left sorted
  low = upperBound + 1
  else high = low-1





code
  
  int cl(int b[],int n,int k){
  
  low = 0 ;
    high = n-1;
    while(low<=high){
        mid = (low+high)/2
        
        l1 = first_occurrence(b[mid])
        h1 = last_ocurrence(b[mid])
        
        d = abs(l1-h1) + 1 
        if(d<k){
            return b[mid]
        }
        
        if(h1-low+1%k==0){
            //[low............h1]=>valid;
            
            low = h1 + 1 
        }else{
            
            high = l1 - 1 
        }
   }
      return -1;
    
}
