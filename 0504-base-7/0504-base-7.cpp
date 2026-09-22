class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";
        if (num < 0) return "-" + convertToBase7(-num); 
        
        string result = "";
        while (num > 0) {
            result = to_string(num % 7) + result;
            num /= 7;
        }
        return result;
    }
};
