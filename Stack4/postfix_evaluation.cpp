#include <iostream>
#include <stack>
using namespace std;

int solve(int a, int b, char op) {
    if(op == '+') return a + b;
    if(op == '-') return a - b;
    if(op == '*') return a * b;
    if(op == '/') return a / b;
    return 0;
}

int evaluatePostfix(string expr) {
    stack<int> st;

    for(char c : expr) {
        if(isdigit(c)) {
            st.push(c - '0'); // convert char digit to int
        }
        else { // operator
            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();
            int result = solve(val1, val2, c);
            st.push(result);
        }
    }

    return st.top();
}

int main() {
    string postfix = "794*8/+3-"; // for infix: 7+9*4/8-3
    int result = evaluatePostfix(postfix);
    cout << "Result: " << result << endl;
    return 0;
}
