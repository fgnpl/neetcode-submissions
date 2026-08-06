class Solution {
public:
    bool isValid(char c) {
        int val = static_cast<int>(c);
        if ((val - '0') >= 0 && (val - '0') <= 9) return true;
        if ((val - 'a') >= 0 && (val - 'a') <= 26) return true;
        return false;
    }
    bool isPalindrome(string s) {
        int p1 = 0, p2 = s.length() - 1;
        while (p1 <= p2) {
            while (!isValid(tolower(s[p1]))) {
                p1++;
                if (p1 > (s.length() - 1)) return true;
            }
            while (!isValid(tolower(s[p2]))) {
                p2--;
            }
            cout << s[p1] << " " << s[p2] << endl;
            if (tolower(s[p1]) != tolower(s[p2])) {
                return false;
            }
            p1++;
            p2--;
        }
        return true;
    }
};
