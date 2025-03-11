Input:  arr[] = [2, 3, 7, 10, 11, 11, 25], target = 9
Output: 3


Input: arr[] = [2, 3, 7, 10, 11, 11, 25], target = 11
Output: 4



  
   int lowerBound(vector<int>& ar, int k) {
         int low=0;
        int high=ar.size();
        while(low<high) {
            int mid=(low+high)/2;
            if(ar[mid]>=k){
                high = mid;
            }else{
                low=mid+1;
            }
        }
  return low;
