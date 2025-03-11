Input:  arr[] = [2, 3, 7, 10, 11, 11, 25], target = 9
Output: 3
Explanation: 3 is the smallest index in arr[], at which element (arr[3] = 10) is larger than 9.
Input: arr[] = [2, 3, 7, 10, 11, 11, 25], target = 11
Output: 6
Explanation: 6 is the smallest index in arr[], at which element (arr[6] = 25) is larger than 11.
Input: arr[] = [2, 3, 7, 10, 11, 11, 25], target = 100
Output: 7




 int upperBound(vector<int>& ar, int k) {
        int low=0;
        int high=ar.size();
        while(low<high) {
            int mid=(low+high)/2;
            if(ar[mid]>k){
                high = mid;
            }else{
                low=mid+1;
            }
        }
        return high;
