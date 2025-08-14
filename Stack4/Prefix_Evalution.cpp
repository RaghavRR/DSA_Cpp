#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int solve(int a, int b, char op) {
    if(op == '+') return a + b;
    if(op == '-') return a - b;
    if(op == '*') return a * b;
    if(op == '/') return a / b;
    return 0;
}

int evaluatePrefix(string expr) {
    stack<int> st;

    for(int i = expr.length() - 1; i >= 0; i--) {
        char c = expr[i];

        if(isdigit(c)) {
            st.push(c - '0'); // convert char to int
        }
        else { // operator
            int val1 = st.top(); st.pop();
            int val2 = st.top(); st.pop();
            int result = solve(val1, val2, c);
            st.push(result);
        }
    }

    return st.top();
}

int main() {
    string prefix = "-/+*79483"; // equivalent to: 7 + 9 * 4 / 8 - 3
    int result = evaluatePrefix(prefix);
    cout << "Result: " << result << endl;
    return 0;
}
