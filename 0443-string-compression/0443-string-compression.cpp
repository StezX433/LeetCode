
class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int write = 0;
        int n = chars.size();

        while (i < n) {
            char curr = chars[i];
            int count = 0;

            // Count consecutive occurrences
            while (i < n && chars[i] == curr) {
                count++;
                i++;
            }

            // Write the character
            chars[write++] = curr;

            // Write the count if greater than 1
            if (count > 1) {
                string num = to_string(count);

                for (char c : num) {
                    chars[write++] = c;
                }
            }
        }

        return write;
    }
};
