// Input: names = ["Mary","John","Emma"], heights = [180,165,170]
// Output: ["Mary","Emma","John"]
// Explanation: Mary is the tallest, followed by Emma and John.

      vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> people;
        for (int i = 0; i < names.size(); ++i) {
            people.push_back({heights[i], names[i]});
        }
        sort(people.rbegin(), people.rend(), [](const pair<int, string>& a, const pair<int, string>& b) { // no vector<>
            return a.first < b.first;    
        });
        vector<string> sortedNames;
        for (const auto& p : people) {
            sortedNames.push_back(p.second);
        }
        return sortedNames;
