
Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false



// if freq are same return 0 else return 1 
        
sort(arr.begin(), arr.end());
        vector<int> v;
        for (int i = 0; i < arr.size(); i++) {
            int cnt = 1;    // becuase min count ek hoga hr ek ka
            while (i < arr.size()-1 && arr[i] == arr[i + 1]) {
                cnt++;
                i++;
            }
            v.push_back(cnt);
        }

        sort(v.begin(), v.end());
        for (int i = 1; i < v.size(); i++) {
            if (v[i] == v[i - 1]) {
                return false;
            }
        }

        return true;
