class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> score;

        for (int i = 0; i < operations.size(); i++) {

            if (isdigit(operations[i][0]) ||
                (operations[i][0] == '-' && operations[i].size() > 1)) {

                score.push(stoi(operations[i]));
            }

            else if (operations[i] == "+") {
                int x = score.top();
                score.pop();

                int y = score.top();
                score.pop();

                score.push(y);
                score.push(x);
                score.push(x + y);
            }

            else if (operations[i] == "C") {
                score.pop();
            }

            else if (operations[i] == "D") {
                score.push(2 * score.top());
            }
        }

        int result = 0;

        while (!score.empty()) {
            result += score.top();
            score.pop();
        }

        return result;
    }
};