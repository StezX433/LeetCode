
class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending in 0
        // (except 0 itself) cannot be palindromes.
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversed = 0;

        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }

        // Even digits: x == reversed
        // Odd digits: remove the middle digit from reversed
        return x == reversed || x == reversed / 10;
    }
};
