
#include <climits>

class Solution {
public:
    int reverse(int x) {
        int sign = 1;

        if (x < 0) {
            sign = -1;
        }

        int y = 0;

        while (x != 0) {
            int j = x % 10;

            if (y > INT_MAX / 10 ||
                (y == INT_MAX / 10 && j > 7)) {
                return 0;
            }

            if (y < INT_MIN / 10 ||
                (y == INT_MIN / 10 && j < -8)) {
                return 0;
            }

            y = y * 10 + j;
            x /= 10;
        }

        return y;
    }
};
