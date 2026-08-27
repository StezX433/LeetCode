class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (int i = 0; i < tokens.size(); i++) {

            // If token is a number
            if (isdigit(tokens[i][0]) ||
                (tokens[i][0] == '-' && tokens[i].size() > 1)) {

                st.push(stoi(tokens[i]));
            }

            // Addition
            else if (tokens[i] == "+") {
                int x = st.top();
                st.pop();

                int y = st.top();
                st.pop();

                st.push(y + x);
            }

            // Multiplication
            else if (tokens[i] == "*") {
                int x = st.top();
                st.pop();

                int y = st.top();
                st.pop();

                st.push(y * x);
            }

            // Division
            else if (tokens[i] == "/") {
                int x = st.top();
                st.pop();

                int y = st.top();
                st.pop();

                st.push(y / x);
            }

            // Subtraction
            else {
                int x = st.top();
                st.pop();

                int y = st.top();
                st.pop();

                st.push(y - x);
            }
        }

        return st.top();
    }
};