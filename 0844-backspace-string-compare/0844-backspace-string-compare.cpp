class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss;
        stack<char> st;

        // Process s
        for (auto c : s) {
            if (c == '#') {
                if (!ss.empty()) {
                    ss.pop();
                }
            }
            else {
                ss.push(c);
            }
        }

        // Process t
        for (auto c : t) {
            if (c == '#') {
                if (!st.empty()) {
                    st.pop();
                }
            }
            else {
                st.push(c);
            }
        }

        // Compare both stacks
        if (ss.size() != st.size()) {
            return false;
        }

        while (!ss.empty()) {
            if (ss.top() != st.top()) {
                return false;
            }

            ss.pop();
            st.pop();
        }

        return true;
    }
};