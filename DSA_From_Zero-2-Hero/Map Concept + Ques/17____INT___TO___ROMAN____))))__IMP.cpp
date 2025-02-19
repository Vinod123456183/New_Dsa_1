    string intToRoman(int num) {
        // why we made these small small pairs  
        vector<pair<int, string>> roman = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
            {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
            {5, "V"},    {4, "IV"},   {1, "I"}};
        string result = "";
        for (auto& r : roman) {
            while (num >= r.first) {
                result += r.second;
                num -= r.first;
            }
        }

1994
"MCMXCIV"
   
58
"LVIII"

1994
"MCMXCIV"
