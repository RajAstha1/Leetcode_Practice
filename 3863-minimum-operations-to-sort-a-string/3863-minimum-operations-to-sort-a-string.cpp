class Solution {
public:
    int minOperations(string s) {
        if (is_sorted(s.begin(), s.end()))
            return 0;
        if (s.size() == 2)
            return -1;

        char mn = *min_element(begin(s), end(s));
        char mx = *max_element(begin(s), end(s));

        if (s.front() == mn || s.back() == mx)
            return 1;

        
        if (s.front() == mx && s.back() == mn) {
            int cntMin = count(s.begin(), s.end(), mn);
            int cntMax = count(s.begin(), s.end(), mx);

            if (cntMin == 1 && cntMax == 1)
                return 3;
        }

        return 2;
    }
};