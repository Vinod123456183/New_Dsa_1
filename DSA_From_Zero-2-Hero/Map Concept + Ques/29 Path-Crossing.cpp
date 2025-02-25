Given a string path, where path[i] = 'N', 'S', 'E' or 'W', each representing moving one unit north, south, east, or west, respectively. You start at the origin (0, 0) on a 2D plane and walk on the path specified by path.
Return true if the path crosses itself at any point, that is, if at any time you are on a location you have previously visited. Return false otherwise.

Edge CAses 
EW
NESWW
NNEESSWW


    bool isPathCrossing(string s) {
        set<pair<int, int>> st;
        st.insert({0, 0});
        int x = 0, y = 0;
        for (int i = 0; i < s.size(); i++) {
            char El = s[i];
            if (El == 'E') {
                x++;
            } else if (El == 'W') {
                x--;
            } else if (El == 'N') {
                y++;
            } else if (El == 'S') {
                y--;
            }
            if (st.find({x, y}) != st.end()) {
                return 1;
            } else {
                st.insert({x, y});
            }
        }
        return 0;
    
