
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> seen;

        for (int i = 0; i < operations.size(); i++) {

            if (operations[i] == "D") {
                int x = seen.top();
                seen.push(x * 2);

            } else if (operations[i] == "C") {
                seen.pop();

            } else if (operations[i] == "+") {
                int x = seen.top();
                seen.pop();

                int y = seen.top();
                seen.pop();

                seen.push(y);
                seen.push(x);
                seen.push(x + y);

            } else {
                seen.push(stoi(operations[i]));
            }
        }

        int sum = 0;

        while (!seen.empty()) {
            sum += seen.top();
            seen.pop();
        }

        return sum;
    }
};
